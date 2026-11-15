	THUMB_FUNC_START sub_0810E598
sub_0810E598: @ 0x0810E598
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810E5CC  @ =gRam
	ldr r1, _0810E5D0  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810E5B4
	mov r0, #20
	bl sub_0810EF98
	cmp r0, #0
	bne _0810E5DC
_0810E5B4:
	ldr r1, _0810E5D4  @ =0x00000183
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r1, _0810E5D8  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _0810E5FC
	.byte 0x00
	.byte 0x00
_0810E5CC:
	.4byte gRam
_0810E5D0:
	.4byte 0x00001AE2
_0810E5D4:
	.4byte 0x00000183
_0810E5D8:
	.4byte 0x00000F52
_0810E5DC:
	ldr r0, _0810E604  @ =0x00000B6C
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	mov r1, #193
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9564
	ldr r0, _0810E608  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810E5FC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810E604:
	.4byte 0x00000B6C
_0810E608:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810E598

