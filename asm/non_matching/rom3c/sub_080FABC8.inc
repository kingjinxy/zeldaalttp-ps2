	THUMB_FUNC_START sub_080FABC8
sub_080FABC8: @ 0x080FABC8
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080FAC0C  @ =gRam
	ldr r1, _080FAC10  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #0
	mov r1, #8
	strb r1, [r0]
	ldr r1, _080FAC14  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	bl GetRandomInt
	ldr r1, _080FAC18  @ =0x00001152
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #15
	and r1, r1, r0
	add r1, r1, #16
	strb r1, [r2]
	ldr r0, _080FAC1C  @ =0x00000F52
	add r5, r5, r0
	add r4, r4, r5
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FAC0C:
	.4byte gRam
_080FAC10:
	.4byte 0x00000FB2
_080FAC14:
	.4byte 0x00000F92
_080FAC18:
	.4byte 0x00001152
_080FAC1C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FABC8

