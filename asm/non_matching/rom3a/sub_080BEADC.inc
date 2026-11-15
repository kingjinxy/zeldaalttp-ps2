	THUMB_FUNC_START sub_080BEADC
sub_080BEADC: @ 0x080BEADC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r7, _080BEB2C  @ =gUnknown_0200243C
	ldrh r1, [r7]
	ldr r0, _080BEB30  @ =gUnknown_0200243E
	mov r8, r0
	ldrh r0, [r0]
	lsl r0, r0, #16
	add r4, r1, r0
	ldr r0, _080BEB34  @ =gRam
	ldr r1, _080BEB38  @ =0x000009A8
	add r6, r0, r1
	ldr r5, [r6]
	add r0, r5, #0
	mov r1, #60
	bl __udivsi3
	add r1, r0, #0
	add r4, r4, r1
	ldr r0, _080BEB3C  @ =0x0036EE7F
	cmp r4, r0
	bls _080BEB0C
	add r4, r0, #0
_080BEB0C:
	strh r4, [r7]
	lsr r0, r4, #16
	mov r2, r8
	strh r0, [r2]
	lsl r0, r1, #4
	sub r0, r0, r1
	lsl r0, r0, #2
	sub r0, r5, r0
	str r0, [r6]
	add r0, r4, #0
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080BEB2C:
	.4byte gUnknown_0200243C
_080BEB30:
	.4byte gUnknown_0200243E
_080BEB34:
	.4byte gRam
_080BEB38:
	.4byte 0x000009A8
_080BEB3C:
	.4byte 0x0036EE7F
	THUMB_FUNC_END sub_080BEADC

