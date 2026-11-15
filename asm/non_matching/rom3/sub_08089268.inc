	THUMB_FUNC_START sub_08089268
sub_08089268: @ 0x08089268
	push {lr}
	ldr r2, _080892B0  @ =gRam
	ldr r1, _080892B4  @ =0x00000B06
	add r0, r2, r1
	mov r1, #0
	strh r1, [r0]
	ldr r3, _080892B8  @ =0x00000978
	add r0, r2, r3
	strh r1, [r0]
	ldr r3, _080892BC  @ =0x00000C02
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _080892C0  @ =0x00000AFE
	add r0, r2, r1
	ldrh r3, [r0]
	add r1, r1, #10
	add r0, r2, r1
	strh r3, [r0]
	ldr r1, _080892C4  @ =0x0000FFFE
	and r1, r1, r3
	ldr r3, _080892C8  @ =0x000018D0
	add r0, r2, r3
	add r1, r1, r0
	ldrh r0, [r1]
	sub r0, r0, #2
	mov r3, #151
	lsl r3, r3, #4
	add r2, r2, r3
	strh r0, [r2]
	strh r0, [r1]
	mov r1, #0
	ldrsh r0, [r2, r1]
	bl sub_08089110
	pop {r0}
	bx r0
_080892B0:
	.4byte gRam
_080892B4:
	.4byte 0x00000B06
_080892B8:
	.4byte 0x00000978
_080892BC:
	.4byte 0x00000C02
_080892C0:
	.4byte 0x00000AFE
_080892C4:
	.4byte 0x0000FFFE
_080892C8:
	.4byte 0x000018D0
	THUMB_FUNC_END sub_08089268

