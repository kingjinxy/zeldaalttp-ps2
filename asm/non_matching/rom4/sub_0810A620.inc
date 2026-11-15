	THUMB_FUNC_START sub_0810A620
sub_0810A620: @ 0x0810A620
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _0810A64C  @ =gRam
	ldr r2, _0810A650  @ =0x00000FC2
	add r0, r1, r2
	add r0, r3, r0
	ldrb r2, [r0]
	cmp r2, #0
	beq _0810A66A
	ldr r4, _0810A654  @ =0x000009AC
	add r0, r1, r4
	ldrb r0, [r0]
	cmp r0, #26
	beq _0810A66A
	cmp r2, #32
	bne _0810A65C
	ldr r0, _0810A658  @ =0x00000A3C
	add r1, r1, r0
	mov r0, #29
	strh r0, [r1]
	b _0810A670
_0810A64C:
	.4byte gRam
_0810A650:
	.4byte 0x00000FC2
_0810A654:
	.4byte 0x000009AC
_0810A658:
	.4byte 0x00000A3C
_0810A65C:
	cmp r2, #64
	bne _0810A670
	mov r0, #185
	lsl r0, r0, #1
	bl sub_080C95C0
	b _0810A670
_0810A66A:
	add r0, r3, #0
	bl sub_0810A678
_0810A670:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810A620

	.byte 0x00
	.byte 0x00
