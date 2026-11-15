	THUMB_FUNC_START sub_081336D4
sub_081336D4: @ 0x081336D4
	push {lr}
	mov r0, #32
	mov r1, #96
	bl sub_081318E0
	mov r0, #32
	mov r1, #96
	bl sub_081318E0
	ldr r1, _08133700  @ =gRam
	ldr r0, _08133704  @ =0x00000CF8
	add r2, r1, r0
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	ldr r0, _08133708  @ =0x0000099B
	add r1, r1, r0
	mov r0, #1
	strb r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08133700:
	.4byte gRam
_08133704:
	.4byte 0x00000CF8
_08133708:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_081336D4

