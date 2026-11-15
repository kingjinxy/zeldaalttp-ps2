	THUMB_FUNC_START sub_0809B2AC
sub_0809B2AC: @ 0x0809B2AC
	push {lr}
	ldr r2, _0809B2E8  @ =gRam
	ldr r1, _0809B2EC  @ =0x000016C1
	add r0, r2, r1
	ldr r3, _0809B2F0  @ =0x000016ED
	add r1, r2, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	add r3, r3, #59
	add r1, r2, r3
	strb r0, [r1]
	ldr r1, _0809B2F4  @ =0x000016C5
	add r0, r2, r1
	sub r3, r3, #55
	add r1, r2, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	ldr r1, _0809B2F8  @ =0x00001729
	add r2, r2, r1
	strb r0, [r2]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	ble _0809B2FC
	bl sub_0806FED0
	b _0809B304
	.byte 0x00
	.byte 0x00
_0809B2E8:
	.4byte gRam
_0809B2EC:
	.4byte 0x000016C1
_0809B2F0:
	.4byte 0x000016ED
_0809B2F4:
	.4byte 0x000016C5
_0809B2F8:
	.4byte 0x00001729
_0809B2FC:
	cmp r0, #0
	bge _0809B304
	bl sub_0806FF34
_0809B304:
	ldr r0, _0809B31C  @ =gRam
	ldr r3, _0809B320  @ =0x00001728
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0809B324
	bl sub_08070000
	b _0809B32C
	.byte 0x00
	.byte 0x00
_0809B31C:
	.4byte gRam
_0809B320:
	.4byte 0x00001728
_0809B324:
	cmp r0, #0
	ble _0809B32C
	bl sub_0806FF9C
_0809B32C:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809B2AC

