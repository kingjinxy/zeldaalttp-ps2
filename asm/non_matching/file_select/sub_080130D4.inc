	THUMB_FUNC_START sub_080130D4
sub_080130D4: @ 0x080130D4
	push {r4,lr}
	add r3, r0, #0
	mov r1, #0
	mov r2, #0
	ldr r4, _080130E0  @ =gUnknown_020309E0
	b _080130F0
_080130E0:
	.4byte gUnknown_020309E0
_080130E4:
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
_080130F0:
	cmp r1, #31
	bhi _08013106
	lsl r0, r1, #2
	add r0, r0, r4
	ldr r0, [r0]
	cmp r0, r3
	bne _08013102
	mov r0, #0
	b _08013114
_08013102:
	cmp r0, #0
	bne _080130E4
_08013106:
	cmp r2, #31
	bhi _08013112
	ldr r1, _0801311C  @ =gUnknown_020309E0
	lsl r0, r2, #2
	add r0, r0, r1
	str r3, [r0]
_08013112:
	mov r0, #1
_08013114:
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0801311C:
	.4byte gUnknown_020309E0
	THUMB_FUNC_END sub_080130D4

