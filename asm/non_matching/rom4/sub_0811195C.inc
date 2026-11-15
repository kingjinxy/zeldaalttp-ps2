	THUMB_FUNC_START sub_0811195C
sub_0811195C: @ 0x0811195C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	bl GetRandomInt
	mov r1, #64
	and r1, r1, r0
	cmp r1, #0
	beq _08111972
	b _08111AA8
_08111972:
	ldr r2, _08111A70  @ =gRam
	ldr r1, _08111A74  @ =0x00000C8A
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #2
	and r0, r0, r1
	mov r4, #128
	lsl r4, r4, #5
	add r3, r2, #0
	cmp r0, #0
	beq _0811198E
	mov r4, #128
	lsl r4, r4, #7
_0811198E:
	ldr r2, _08111A78  @ =0x00000996
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r2, r0, #1
	mov r0, #14
	and r2, r2, r0
	cmp r2, r4
	blt _081119A0
	b _08111AA8
_081119A0:
	ldr r5, _08111A7C  @ =gUnknown_08156BC6
	add r6, r3, #0
	ldr r0, _08111A80  @ =0x00000C88
	add r0, r0, r3
	mov r12, r0
_081119AA:
	mov r0, #32
	and r0, r0, r2
	cmp r0, #0
	beq _081119B4
	add r2, r2, #32
_081119B4:
	lsl r0, r2, #1
	ldr r1, _08111A84  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r1, [r5]
	ldrh r0, [r0]
	cmp r1, r0
	bne _08111AA0
	mov r0, #30
	add r1, r2, #0
	and r1, r1, r0
	lsl r1, r1, #3
	mov r0, #128
	lsl r0, r0, #5
	and r0, r0, r2
	asr r0, r0, #3
	orr r1, r1, r0
	mov r0, #128
	lsl r0, r0, #3
	and r0, r0, r2
	asr r0, r0, #2
	orr r1, r1, r0
	ldr r4, _08111A88  @ =0x00000C8C
	add r0, r6, r4
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r7, r0, #16
	lsr r0, r7, #16
	mov r8, r0
	mov r1, #240
	lsl r1, r1, #2
	and r1, r1, r2
	asr r1, r1, #2
	mov r0, #128
	lsl r0, r0, #6
	and r0, r0, r2
	asr r0, r0, #4
	orr r1, r1, r0
	mov r0, #128
	lsl r0, r0, #4
	and r2, r2, r0
	asr r0, r2, #3
	orr r1, r1, r0
	mov r2, r12
	ldrh r0, [r2]
	add r0, r0, r1
	lsl r5, r0, #16
	lsr r6, r5, #16
	mov r0, #244
	mov r1, #0
	str r3, [sp]
	bl sub_080CA538
	add r4, r0, #0
	mov r0, #0
	bl sub_080CAE50
	ldr r3, [sp]
	cmp r4, #0
	blt _08111AA8
	ldr r1, _08111A8C  @ =0x00000EE2
	add r0, r3, r1
	add r0, r4, r0
	mov r2, r8
	strb r2, [r0]
	add r1, r1, #32
	add r0, r3, r1
	add r0, r4, r0
	lsr r1, r7, #24
	strb r1, [r0]
	ldr r2, _08111A90  @ =0x00000ED2
	add r0, r3, r2
	add r0, r4, r0
	strb r6, [r0]
	ldr r1, _08111A94  @ =0x00000EF2
	add r0, r3, r1
	add r0, r4, r0
	lsr r1, r5, #24
	strb r1, [r0]
	ldr r2, _08111A98  @ =0x00001122
	add r1, r3, r2
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #207
	and r0, r0, r2
	strb r0, [r1]
	ldr r0, _08111A9C  @ =0x000010F2
	add r1, r3, r0
	add r1, r4, r1
	mov r2, #161
	lsl r2, r2, #4
	add r0, r3, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _08111AA8
_08111A70:
	.4byte gRam
_08111A74:
	.4byte 0x00000C8A
_08111A78:
	.4byte 0x00000996
_08111A7C:
	.4byte gUnknown_08156BC6
_08111A80:
	.4byte 0x00000C88
_08111A84:
	.4byte gUnknown_02018000
_08111A88:
	.4byte 0x00000C8C
_08111A8C:
	.4byte 0x00000EE2
_08111A90:
	.4byte 0x00000ED2
_08111A94:
	.4byte 0x00000EF2
_08111A98:
	.4byte 0x00001122
_08111A9C:
	.4byte 0x000010F2
_08111AA0:
	add r2, r2, #16
	cmp r2, r4
	bge _08111AA8
	b _081119AA
_08111AA8:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811195C

