	THUMB_FUNC_START sub_080CEC80
sub_080CEC80: @ 0x080CEC80
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080CEDD8  @ =gRam
	ldr r3, _080CEDDC  @ =0x000010D2
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #0
	strb r3, [r1]
	ldr r4, _080CEDE0  @ =0x00001062
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEDE4  @ =0x00000F22
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	sub r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEDE8  @ =0x00001152
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEDEC  @ =0x00000F42
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	sub r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEDF0  @ =0x00001162
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEDF4  @ =0x00000F52
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #64
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #32
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEDF8  @ =0x000010E2
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #224
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEDFC  @ =0x00001082
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #32
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	sub r4, r4, #128
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE00  @ =0x00001142
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE04  @ =0x00001022
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #80
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #160
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	sub r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE08  @ =0x00000F62
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE0C  @ =0x00001182
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE10  @ =0x00001052
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE14  @ =0x00001172
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE18  @ =0x00000D94
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE1C  @ =0x00001122
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE20  @ =0x00000D74
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE24  @ =0x00000EB5
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r4, _080CEE28  @ =0x0000140C
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	add r4, r4, #16
	add r1, r2, r4
	add r1, r0, r1
	strb r3, [r1]
	ldr r1, _080CEE2C  @ =0x000013B2
	add r2, r2, r1
	add r0, r0, r2
	strb r3, [r0]
	pop {r4}
	pop {r0}
	bx r0
_080CEDD8:
	.4byte gRam
_080CEDDC:
	.4byte 0x000010D2
_080CEDE0:
	.4byte 0x00001062
_080CEDE4:
	.4byte 0x00000F22
_080CEDE8:
	.4byte 0x00001152
_080CEDEC:
	.4byte 0x00000F42
_080CEDF0:
	.4byte 0x00001162
_080CEDF4:
	.4byte 0x00000F52
_080CEDF8:
	.4byte 0x000010E2
_080CEDFC:
	.4byte 0x00001082
_080CEE00:
	.4byte 0x00001142
_080CEE04:
	.4byte 0x00001022
_080CEE08:
	.4byte 0x00000F62
_080CEE0C:
	.4byte 0x00001182
_080CEE10:
	.4byte 0x00001052
_080CEE14:
	.4byte 0x00001172
_080CEE18:
	.4byte 0x00000D94
_080CEE1C:
	.4byte 0x00001122
_080CEE20:
	.4byte 0x00000D74
_080CEE24:
	.4byte 0x00000EB5
_080CEE28:
	.4byte 0x0000140C
_080CEE2C:
	.4byte 0x000013B2
	THUMB_FUNC_END sub_080CEC80

