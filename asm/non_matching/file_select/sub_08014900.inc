	THUMB_FUNC_START sub_08014900
sub_08014900: @ 0x08014900
	push {r4-r6,lr}
	ldr r4, _0801491C  @ =gUnknown_0202A500
	mov r5, #0
	ldr r0, _08014920  @ =gUnknown_02000004
	add r6, r0, #0
	ldrb r0, [r6]
	cmp r5, r0
	bcs _08014942
_08014910:
	ldrb r0, [r4, #3]
	cmp r0, #1
	beq _08014924
	cmp r0, #2
	beq _0801492C
	b _08014932
_0801491C:
	.4byte gUnknown_0202A500
_08014920:
	.4byte gUnknown_02000004
_08014924:
	add r0, r4, #0
	bl sub_08014958
	b _08014932
_0801492C:
	add r0, r4, #0
	bl sub_08014E60
_08014932:
	add r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	add r4, r4, #8
	ldr r0, _08014950  @ =gUnknown_02000004
	ldrb r0, [r0]
	cmp r5, r0
	bcc _08014910
_08014942:
	mov r1, #0
	strb r1, [r6]
	ldr r0, _08014954  @ =gUnknown_02016324
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_08014950:
	.4byte gUnknown_02000004
_08014954:
	.4byte gUnknown_02016324
	THUMB_FUNC_END sub_08014900

