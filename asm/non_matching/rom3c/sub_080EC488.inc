	THUMB_FUNC_START sub_080EC488
sub_080EC488: @ 0x080EC488
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080EC4F0  @ =gRam
	ldr r1, _080EC4F4  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080EC4E8
	bl GetRandomInt
	ldr r2, _080EC4F8  @ =gUnknown_0817841C
	mov r1, #3
	and r1, r1, r0
	add r1, r1, r2
	ldrb r0, [r1]
	strb r0, [r5]
	ldr r0, _080EC4FC  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EC500  @ =0x00000FB2
	add r3, r6, r1
	add r3, r4, r3
	add r1, r1, #208
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r0, _080EC504  @ =0x00000F22
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080EC508  @ =gUnknown_08178420
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EC50C  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080EC510  @ =gUnknown_08178424
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080EC4E8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EC4F0:
	.4byte gRam
_080EC4F4:
	.4byte 0x00000FC2
_080EC4F8:
	.4byte gUnknown_0817841C
_080EC4FC:
	.4byte 0x00000F52
_080EC500:
	.4byte 0x00000FB2
_080EC504:
	.4byte 0x00000F22
_080EC508:
	.4byte gUnknown_08178420
_080EC50C:
	.4byte 0x00000F12
_080EC510:
	.4byte gUnknown_08178424
	THUMB_FUNC_END sub_080EC488

