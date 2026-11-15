	THUMB_FUNC_START sub_080D2DE4
sub_080D2DE4: @ 0x080D2DE4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r2, r4, #0
	ldr r6, _080D2E6C  @ =gRam
	ldr r0, _080D2E70  @ =0x00001172
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D2E74  @ =0x0000165C
	add r0, r6, r1
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080D2EB0
	add r0, r4, #0
	bl sub_080D3F74
	ldr r0, _080D2E78  @ =0x00001662
	add r7, r6, r0
	ldrb r1, [r7]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080D2E8C
	ldr r0, _080D2E7C  @ =0x00000EE2
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	ldr r0, _080D2E80  @ =0x00000ED2
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #3
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080D3530
	add r5, r0, #0
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080D3F74
	ldr r1, _080D2E84  @ =0x00001062
	add r0, r6, r1
	add r1, r4, r0
	strb r5, [r1]
	add r0, r5, r0
	strb r4, [r0]
	ldrb r1, [r7]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D2EDE
	ldr r1, _080D2E88  @ =0x00000F52
	add r0, r6, r1
	add r1, r4, r0
	mov r2, #5
	strb r2, [r1]
	add r0, r5, r0
	strb r2, [r0]
	b _080D2EDE
	.byte 0x00
	.byte 0x00
_080D2E6C:
	.4byte gRam
_080D2E70:
	.4byte 0x00001172
_080D2E74:
	.4byte 0x0000165C
_080D2E78:
	.4byte 0x00001662
_080D2E7C:
	.4byte 0x00000EE2
_080D2E80:
	.4byte 0x00000ED2
_080D2E84:
	.4byte 0x00001062
_080D2E88:
	.4byte 0x00000F52
_080D2E8C:
	ldr r0, _080D2EA8  @ =0x00000EE2
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	ldr r0, _080D2EAC  @ =0x00000ED2
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #3
	strb r0, [r1]
	b _080D2EDE
	.byte 0x00
	.byte 0x00
_080D2EA8:
	.4byte 0x00000EE2
_080D2EAC:
	.4byte 0x00000ED2
_080D2EB0:
	ldr r1, _080D2EC8  @ =0x00001662
	add r0, r6, r1
	ldrh r1, [r0]
	ldr r0, _080D2ECC  @ =0x0000FF20
	and r0, r0, r1
	cmp r0, #0
	beq _080D2ED4
	ldr r1, _080D2ED0  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	b _080D2EDC
_080D2EC8:
	.4byte 0x00001662
_080D2ECC:
	.4byte 0x0000FF20
_080D2ED0:
	.4byte 0x00000FA2
_080D2ED4:
	ldr r1, _080D2EE4  @ =0x00001052
	add r0, r6, r1
	add r0, r2, r0
	mov r1, #2
_080D2EDC:
	strb r1, [r0]
_080D2EDE:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D2EE4:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D2DE4

