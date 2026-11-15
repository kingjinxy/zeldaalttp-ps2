	THUMB_FUNC_START sub_08131D14
sub_08131D14: @ 0x08131D14
	push {lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	bl sub_08131C1C
	ldr r2, _08131D60  @ =gRam
	ldr r0, _08131D64  @ =0x00000CF8
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bne _08131D52
	mov r0, #0
	strh r0, [r1]
	ldr r1, _08131D68  @ =0x00000CFA
	add r2, r2, r1
	ldrh r0, [r2]
	mov r1, #2
	eor r0, r0, r1
	strh r0, [r2]
	cmp r0, #0
	beq _08131D52
	ldr r1, _08131D6C  @ =gUnknown_02006887
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08131D52:
	ldr r0, _08131D60  @ =gRam
	ldr r1, _08131D70  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r0}
	bx r0
_08131D60:
	.4byte gRam
_08131D64:
	.4byte 0x00000CF8
_08131D68:
	.4byte 0x00000CFA
_08131D6C:
	.4byte gUnknown_02006887
_08131D70:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08131D14

