	THUMB_FUNC_START sub_080DB4E0
sub_080DB4E0: @ 0x080DB4E0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080ED830
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080DB522
	ldr r4, _080DB528  @ =gRam
	ldr r2, _080DB52C  @ =0x00000F92
	add r0, r4, r2
	add r0, r5, r0
	strb r1, [r0]
	ldr r1, _080DB530  @ =0x00000FB2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C35C0
	ldr r2, _080DB534  @ =0x00001122
	add r1, r4, r2
	add r1, r5, r1
	ldr r2, _080DB538  @ =gUnknown_08175BA8
	ldr r0, _080DB53C  @ =0x0000164C
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080DB522:
	pop {r4,r5}
	pop {r0}
	bx r0
_080DB528:
	.4byte gRam
_080DB52C:
	.4byte 0x00000F92
_080DB530:
	.4byte 0x00000FB2
_080DB534:
	.4byte 0x00001122
_080DB538:
	.4byte gUnknown_08175BA8
_080DB53C:
	.4byte 0x0000164C
	THUMB_FUNC_END sub_080DB4E0

