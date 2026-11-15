	THUMB_FUNC_START sub_0810BAB0
sub_0810BAB0: @ 0x0810BAB0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r1, _0810BAF4  @ =gRam
	ldr r3, _0810BAF8  @ =0x00000FD2
	add r0, r1, r3
	add r4, r2, r0
	ldrb r3, [r4]
	cmp r3, #0
	bne _0810BADE
	ldr r6, _0810BAFC  @ =0x00000F12
	add r0, r1, r6
	add r0, r2, r0
	strb r3, [r0]
	mov r0, #96
	strb r0, [r4]
	ldr r0, _0810BB00  @ =0x00000F52
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810BADE:
	ldrb r0, [r4]
	cmp r0, #9
	bne _0810BAEE
	add r0, r5, #0
	bl sub_0810BBB0
	bl sub_0808ECAC
_0810BAEE:
	pop {r4-r6}
	pop {r0}
	bx r0
_0810BAF4:
	.4byte gRam
_0810BAF8:
	.4byte 0x00000FD2
_0810BAFC:
	.4byte 0x00000F12
_0810BB00:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810BAB0

