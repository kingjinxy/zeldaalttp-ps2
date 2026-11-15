	THUMB_FUNC_START sub_08072954
sub_08072954: @ 0x08072954
	push {r4,lr}
	bl sub_08096F30
	ldr r2, _08072998  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r3, r2, r0
	ldrh r4, [r3]
	add r0, r4, #1
	strh r0, [r3]
	ldr r0, _0807299C  @ =0x00000C0C
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08072990
	ldr r0, _080729A0  @ =0x000009AD
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
	add r0, r4, #4
	strh r0, [r3]
	ldr r0, _080729A4  @ =0x000016D6
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
	bl sub_080718D4
_08072990:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08072998:
	.4byte gRam
_0807299C:
	.4byte 0x00000C0C
_080729A0:
	.4byte 0x000009AD
_080729A4:
	.4byte 0x000016D6
	THUMB_FUNC_END sub_08072954

