	THUMB_FUNC_START sub_0811ED50
sub_0811ED50: @ 0x0811ED50
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _0811EDBC  @ =gRam
	ldr r1, _0811EDC0  @ =0x00000DCF
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r4, _0811EDC4  @ =0x00000DE3
	add r0, r2, r4
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _0811EDC8  @ =0x00000952
	add r0, r2, r5
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r4, r1, #16
	ldr r1, _0811EDCC  @ =0x00000DC5
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r5, _0811EDD0  @ =0x00000DD9
	add r0, r2, r5
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r5, _0811EDD4  @ =0x00000958
	add r0, r2, r5
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	ldr r0, _0811EDD8  @ =0xFFFF0000
	add r1, r1, r0
	lsr r1, r1, #16
	cmp r1, #158
	bhi _0811EDAC
	lsl r0, r4, #16
	asr r0, r0, #16
	cmp r0, #0
	ble _0811EDAC
	cmp r0, #239
	ble _0811EDB6
_0811EDAC:
	ldr r1, _0811EDDC  @ =0x00000E15
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
_0811EDB6:
	pop {r4,r5}
	pop {r0}
	bx r0
_0811EDBC:
	.4byte gRam
_0811EDC0:
	.4byte 0x00000DCF
_0811EDC4:
	.4byte 0x00000DE3
_0811EDC8:
	.4byte 0x00000952
_0811EDCC:
	.4byte 0x00000DC5
_0811EDD0:
	.4byte 0x00000DD9
_0811EDD4:
	.4byte 0x00000958
_0811EDD8:
	.4byte 0xFFFF0000
_0811EDDC:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_0811ED50

