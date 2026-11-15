	THUMB_FUNC_START sub_081006B4
sub_081006B4: @ 0x081006B4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _0810071C  @ =gRam
	ldr r0, _08100720  @ =0x00000CDE
	add r1, r3, r0
	mov r0, #0
	strh r0, [r1]
	mov r0, #206
	lsl r0, r0, #4
	add r1, r3, r0
	mov r0, #160
	strh r0, [r1]
	ldr r1, _08100724  @ =0x00000FE2
	add r0, r3, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _081006EA
	sub r1, r1, #96
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #96
	strb r0, [r2]
_081006EA:
	ldrb r0, [r2]
	cmp r0, #80
	bne _08100702
	ldr r1, _08100728  @ =0x000009AC
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #26
	beq _08100702
	mov r0, #147
	lsl r0, r0, #1
	bl sub_080C95C0
_08100702:
	ldr r0, _0810071C  @ =gRam
	ldr r1, _08100724  @ =0x00000FE2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #24
	bne _08100716
	add r0, r4, #0
	bl sub_08100840
_08100716:
	pop {r4}
	pop {r0}
	bx r0
_0810071C:
	.4byte gRam
_08100720:
	.4byte 0x00000CDE
_08100724:
	.4byte 0x00000FE2
_08100728:
	.4byte 0x000009AC
	THUMB_FUNC_END sub_081006B4

