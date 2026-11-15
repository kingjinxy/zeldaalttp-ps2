	THUMB_FUNC_START sub_080BEA70
sub_080BEA70: @ 0x080BEA70
	push {r4-r7,lr}
	cmp r0, #32
	bne _080BEAC8
	ldr r6, _080BEAB4  @ =gUnknown_0200243C
	ldrh r1, [r6]
	ldr r7, _080BEAB8  @ =gUnknown_0200243E
	ldrh r0, [r7]
	lsl r0, r0, #16
	add r4, r1, r0
	ldr r0, _080BEABC  @ =gRam
	ldr r1, _080BEAC0  @ =0x000009A8
	add r5, r0, r1
	ldr r0, [r5]
	mov r1, #60
	bl __udivsi3
	add r2, r0, #0
	add r4, r4, r2
	ldr r0, _080BEAC4  @ =0x0036EE7F
	cmp r4, r0
	bls _080BEA9C
	add r4, r0, #0
_080BEA9C:
	strh r4, [r6]
	lsr r0, r4, #16
	strh r0, [r7]
	lsl r1, r2, #4
	sub r1, r1, r2
	lsl r1, r1, #2
	ldr r0, [r5]
	sub r0, r0, r1
	str r0, [r5]
	add r0, r4, #0
	b _080BEAD0
	.byte 0x00
	.byte 0x00
_080BEAB4:
	.4byte gUnknown_0200243C
_080BEAB8:
	.4byte gUnknown_0200243E
_080BEABC:
	.4byte gRam
_080BEAC0:
	.4byte 0x000009A8
_080BEAC4:
	.4byte 0x0036EE7F
_080BEAC8:
	lsl r0, r0, #1
	ldr r1, _080BEAD8  @ =gUnknown_020023FC
	add r0, r0, r1
	ldrh r0, [r0]
_080BEAD0:
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080BEAD8:
	.4byte gUnknown_020023FC
	THUMB_FUNC_END sub_080BEA70

