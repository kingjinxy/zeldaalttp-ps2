	THUMB_FUNC_START sub_08133694
sub_08133694: @ 0x08133694
	push {r4,lr}
	mov r4, #128
	lsl r4, r4, #1
	mov r1, #184
	lsl r1, r1, #1
	add r0, r4, #0
	bl sub_081318E0
	mov r0, #96
	add r1, r4, #0
	bl sub_081318E0
	ldr r1, _081336C8  @ =gRam
	ldr r0, _081336CC  @ =0x00000CF8
	add r2, r1, r0
	ldrh r0, [r2]
	sub r0, r0, #1
	strh r0, [r2]
	ldr r0, _081336D0  @ =0x0000099B
	add r1, r1, r0
	mov r0, #1
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081336C8:
	.4byte gRam
_081336CC:
	.4byte 0x00000CF8
_081336D0:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08133694

