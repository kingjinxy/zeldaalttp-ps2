	THUMB_FUNC_START sub_080C1918
sub_080C1918: @ 0x080C1918
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r3, r2, #0
	lsl r1, r2, #2
	ldr r0, _080C1940  @ =gRam
	ldr r4, _080C1944  @ =0x000015F7
	add r0, r0, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C1954
	cmp r1, #255
	bls _080C194C
	ldr r0, _080C1948  @ =0x000001CF
	cmp r1, r0
	bls _080C1950
	mov r1, #160
	lsl r1, r1, #1
	b _080C1966
	.byte 0x00
	.byte 0x00
_080C1940:
	.4byte gRam
_080C1944:
	.4byte 0x000015F7
_080C1948:
	.4byte 0x000001CF
_080C194C:
	cmp r1, #223
	bhi _080C1964
_080C1950:
	add r0, r2, #0
	b _080C1968
_080C1954:
	ldr r0, _080C1960  @ =0x0000018F
	cmp r1, r0
	bhi _080C1964
	add r0, r3, #0
	b _080C1968
	.byte 0x00
	.byte 0x00
_080C1960:
	.4byte 0x0000018F
_080C1964:
	mov r1, #32
_080C1966:
	lsr r0, r1, #2
_080C1968:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C1918

	.byte 0x00
	.byte 0x00
