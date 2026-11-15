	THUMB_FUNC_START sub_080DD59C
sub_080DD59C: @ 0x080DD59C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r4, _080DD5EC  @ =gRam
	ldr r1, _080DD5F0  @ =0x00000F52
	add r2, r4, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	mov r3, #0
	strb r1, [r2]
	ldr r2, _080DD5F4  @ =0x00000F92
	add r1, r4, r2
	add r0, r0, r1
	mov r5, #1
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080DD5F8  @ =0x000009C6
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _080DD5FC  @ =gUnknown_02002280
	add r1, r1, r2
	ldrb r0, [r1]
	mov r2, #32
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080DD600  @ =0x00001776
	add r0, r4, r1
	strb r3, [r0]
	mov r0, #22
	bl sub_080A1588
	ldr r2, _080DD604  @ =0x00001662
	add r4, r4, r2
	ldrb r0, [r4]
	orr r5, r5, r0
	strb r5, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080DD5EC:
	.4byte gRam
_080DD5F0:
	.4byte 0x00000F52
_080DD5F4:
	.4byte 0x00000F92
_080DD5F8:
	.4byte 0x000009C6
_080DD5FC:
	.4byte gUnknown_02002280
_080DD600:
	.4byte 0x00001776
_080DD604:
	.4byte 0x00001662
	THUMB_FUNC_END sub_080DD59C

