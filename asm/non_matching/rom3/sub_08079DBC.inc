	THUMB_FUNC_START sub_08079DBC
sub_08079DBC: @ 0x08079DBC
	push {r4,r5,lr}
	ldr r3, _08079E3C  @ =gRam
	ldr r1, _08079E40  @ =0x000009AD
	add r2, r3, r1
	strb r0, [r2]
	ldr r4, _08079E44  @ =0x00000978
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #35
	beq _08079E36
	ldr r5, _08079E48  @ =0x00000B5E
	add r4, r3, r5
	ldrh r0, [r4]
	cmp r0, #0
	beq _08079E36
	ldrb r1, [r2]
	ldr r5, _08079E4C  @ =0x00000A1A
	add r0, r3, r5
	strh r1, [r0]
	mov r0, #24
	strb r0, [r2]
	ldr r0, _08079E50  @ =0x000009E8
	add r1, r3, r0
	mov r0, #32
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r1, r3, r2
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
	ldrh r2, [r4]
	ldr r5, _08079E54  @ =gUnknown_0200CBA1
	add r0, r2, r5
	ldrb r1, [r0]
	mov r0, #254
	and r0, r0, r1
	cmp r0, #36
	beq _08079E10
	add r2, r2, #1
_08079E10:
	strh r2, [r4]
	asr r0, r2, #3
	mov r4, #252
	lsl r4, r4, #1
	add r1, r4, #0
	and r0, r0, r1
	ldr r5, _08079E58  @ =0x00000964
	add r1, r3, r5
	strh r0, [r1]
	mov r0, #63
	and r2, r2, r0
	lsl r1, r2, #3
	mov r2, #150
	lsl r2, r2, #4
	add r0, r3, r2
	strh r1, [r0]
	mov r0, #16
	bl sub_08079844
_08079E36:
	pop {r4,r5}
	pop {r0}
	bx r0
_08079E3C:
	.4byte gRam
_08079E40:
	.4byte 0x000009AD
_08079E44:
	.4byte 0x00000978
_08079E48:
	.4byte 0x00000B5E
_08079E4C:
	.4byte 0x00000A1A
_08079E50:
	.4byte 0x000009E8
_08079E54:
	.4byte gUnknown_0200CBA1
_08079E58:
	.4byte 0x00000964
	THUMB_FUNC_END sub_08079DBC

