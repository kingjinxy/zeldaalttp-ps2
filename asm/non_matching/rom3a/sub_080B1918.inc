	THUMB_FUNC_START sub_080B1918
sub_080B1918: @ 0x080B1918
	push {lr}
	bl sub_0812FA28
	ldr r1, _080B1944  @ =gRam
	ldr r2, _080B1948  @ =0x00001AC6
	add r0, r1, r2
	ldrb r2, [r0]
	ldr r3, _080B194C  @ =0x000009B5
	add r0, r1, r3
	mov r3, #0
	strb r2, [r0]
	ldr r0, _080B1950  @ =0x000009AD
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r2, _080B1954  @ =0x0000099D
	add r1, r1, r2
	strb r3, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B1944:
	.4byte gRam
_080B1948:
	.4byte 0x00001AC6
_080B194C:
	.4byte 0x000009B5
_080B1950:
	.4byte 0x000009AD
_080B1954:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_080B1918

