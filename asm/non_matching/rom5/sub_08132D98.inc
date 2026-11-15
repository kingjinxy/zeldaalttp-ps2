	THUMB_FUNC_START sub_08132D98
sub_08132D98: @ 0x08132D98
	push {r4,lr}
	mov r3, #32
	mov r4, #248
	lsl r4, r4, #2
_08132DA0:
	lsl r0, r3, #1
	ldr r1, _08132DF4  @ =gUnknown_02000C00
	add r2, r0, r1
	ldrh r1, [r2]
	add r0, r1, #0
	and r0, r0, r4
	cmp r0, #0
	beq _08132DB8
	add r0, r1, #0
	sub r0, r0, #32
	lsl r0, r0, #16
	lsr r1, r0, #16
_08132DB8:
	strh r1, [r2]
	ldrh r1, [r2]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	beq _08132DCA
	sub r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
_08132DCA:
	strh r1, [r2]
	add r3, r3, #1
	cmp r3, #128
	bne _08132DD6
	mov r3, #128
	lsl r3, r3, #1
_08132DD6:
	mov r0, #128
	lsl r0, r0, #2
	cmp r3, r0
	bne _08132DA0
	bl sub_08132CC4
	ldr r1, _08132DF8  @ =gRam
	ldr r0, _08132DFC  @ =0x0000099B
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_08132DF4:
	.4byte gUnknown_02000C00
_08132DF8:
	.4byte gRam
_08132DFC:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08132D98

