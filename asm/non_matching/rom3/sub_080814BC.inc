	THUMB_FUNC_START sub_080814BC
sub_080814BC: @ 0x080814BC
	push {r4-r7,lr}
	ldr r3, _080815B0  @ =gRam
	mov r0, #177
	lsl r0, r0, #4
	add r1, r3, r0
	mov r2, #0
	mov r0, #1
	strh r0, [r1]
	ldr r1, _080815B4  @ =0x00000B62
	add r0, r3, r1
	strh r2, [r0]
	ldr r2, _080815B8  @ =0x000009DA
	add r5, r3, r2
	ldrh r1, [r5]
	ldr r7, _080815BC  @ =0x00000A1E
	add r0, r3, r7
	strh r1, [r0]
	ldr r2, _080815C0  @ =gUnknown_08162C28
	ldrh r1, [r5]
	lsl r0, r1, #2
	add r0, r0, r2
	ldr r6, [r0]
	lsl r1, r1, #1
	ldr r4, _080815C4  @ =gUnknown_02002000
	add r1, r1, r4
	ldrh r1, [r1]
	mov r0, #240
	lsl r0, r0, #8
	and r0, r0, r1
	ldr r2, _080815C8  @ =0x00000AA6
	add r1, r3, r2
	strh r0, [r1]
	mov r7, #240
	lsl r7, r7, #4
	add r1, r7, #0
	ldr r7, _080815CC  @ =0x00000BFE
	add r2, r3, r7
	orr r0, r0, r1
	strh r0, [r2]
	ldrh r0, [r5]
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r1, [r0]
	mov r0, #255
	lsl r0, r0, #4
	and r0, r0, r1
	lsl r0, r0, #4
	ldr r2, _080815D0  @ =0x00000AA8
	add r1, r3, r2
	strh r0, [r1]
	ldrh r0, [r5]
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	ldr r7, _080815D4  @ =0x00000AAE
	add r1, r3, r7
	strh r0, [r1]
	mov r1, #0
	ldr r0, _080815D8  @ =0x000018D0
	add r5, r3, r0
	strh r1, [r5]
	ldrh r0, [r6]
	ldr r1, _080815DC  @ =0x0000FFFF
	add r7, r3, #0
	cmp r0, r1
	beq _0808155C
	mov r4, #0
	add r2, r1, #0
	add r1, r6, #0
	add r3, r5, #0
_0808154C:
	ldrh r0, [r1]
	strh r0, [r3]
	add r3, r3, #2
	add r1, r1, #2
	strh r4, [r3]
	ldrh r0, [r1]
	cmp r0, r2
	bne _0808154C
_0808155C:
	ldr r1, _080815B8  @ =0x000009DA
	add r4, r7, r1
	ldrh r0, [r4]
	sub r1, r0, #1
	mov r5, #15
	add r0, r1, #0
	and r0, r0, r5
	cmp r0, #15
	beq _08081574
	mov r0, #36
	bl sub_08081308
_08081574:
	ldrh r0, [r4]
	add r1, r0, #1
	add r0, r1, #0
	and r0, r0, r5
	cmp r0, #0
	beq _08081586
	mov r0, #24
	bl sub_08081308
_08081586:
	ldrh r0, [r4]
	add r1, r0, #0
	sub r1, r1, #16
	cmp r1, #0
	blt _08081596
	mov r0, #12
	bl sub_08081308
_08081596:
	ldrh r0, [r4]
	add r1, r0, #0
	add r1, r1, #16
	ldr r0, _080815E0  @ =0x0000013F
	cmp r1, r0
	bgt _080815A8
	mov r0, #0
	bl sub_08081308
_080815A8:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080815B0:
	.4byte gRam
_080815B4:
	.4byte 0x00000B62
_080815B8:
	.4byte 0x000009DA
_080815BC:
	.4byte 0x00000A1E
_080815C0:
	.4byte gUnknown_08162C28
_080815C4:
	.4byte gUnknown_02002000
_080815C8:
	.4byte 0x00000AA6
_080815CC:
	.4byte 0x00000BFE
_080815D0:
	.4byte 0x00000AA8
_080815D4:
	.4byte 0x00000AAE
_080815D8:
	.4byte 0x000018D0
_080815DC:
	.4byte 0x0000FFFF
_080815E0:
	.4byte 0x0000013F
	THUMB_FUNC_END sub_080814BC

