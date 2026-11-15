	THUMB_FUNC_START sub_080B2E5C
sub_080B2E5C: @ 0x080B2E5C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _080B2EBC  @ =gRam
	ldr r2, _080B2EC0  @ =0x0000097C
	add r0, r1, r2
	ldrb r7, [r0]
	ldr r3, _080B2EC4  @ =0x0000097D
	add r0, r1, r3
	ldrb r0, [r0]
	mov r12, r0
	ldr r2, _080B2EC8  @ =gUnknown_03003E74
	strh r6, [r2]
	ldr r4, _080B2ECC  @ =0x00000996
	add r0, r1, r4
	ldrb r0, [r0]
	lsr r4, r0, #4
	mov r0, #1
	and r4, r4, r0
	add r5, r1, #0
	cmp r4, #0
	bne _080B2EDC
	ldr r0, _080B2ED0  @ =0x00000979
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r0, #196
	bne _080B2EDC
	ldr r1, _080B2ED4  @ =gUnknown_0816EEC0
	add r0, r6, #0
	sub r0, r0, #8
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r1, _080B2ED8  @ =0x00000978
	add r0, r5, r1
	mov r1, #50
	strb r1, [r0]
	ldrh r0, [r2]
	ldrb r3, [r3]
	lsl r1, r1, #8
	orr r3, r3, r1
	str r4, [sp]
	add r1, r7, #0
	mov r2, r12
	bl sub_080C6368
	b _080B2F08
_080B2EBC:
	.4byte gRam
_080B2EC0:
	.4byte 0x0000097C
_080B2EC4:
	.4byte 0x0000097D
_080B2EC8:
	.4byte gUnknown_03003E74
_080B2ECC:
	.4byte 0x00000996
_080B2ED0:
	.4byte 0x00000979
_080B2ED4:
	.4byte gUnknown_0816EEC0
_080B2ED8:
	.4byte 0x00000978
_080B2EDC:
	ldrh r0, [r2]
	sub r1, r7, #4
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r2, r12
	sub r2, r2, #4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080B2F10  @ =0x00000979
	add r3, r5, r4
	ldrb r3, [r3]
	ldr r6, _080B2F14  @ =0x00000978
	add r4, r5, r6
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	sub r6, r6, #3
	add r4, r5, r6
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
_080B2F08:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080B2F10:
	.4byte 0x00000979
_080B2F14:
	.4byte 0x00000978
	THUMB_FUNC_END sub_080B2E5C

