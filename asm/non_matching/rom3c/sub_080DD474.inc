	THUMB_FUNC_START sub_080DD474
sub_080DD474: @ 0x080DD474
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080DD4F4  @ =gRam
	ldr r1, _080DD4F8  @ =0x00001132
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DD4CE
	ldr r1, _080DD4FC  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r2, _080DD500  @ =0x00000546
	add r0, r5, r2
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080DD4CE
	ldr r0, _080DD504  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DD508  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	ldr r2, _080DD50C  @ =0x00000FC2
	add r1, r5, r2
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #4
	strb r0, [r1]
	ldr r0, _080DD510  @ =0x00001770
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
_080DD4CE:
	ldr r5, _080DD4F4  @ =gRam
	ldr r1, _080DD514  @ =0x00000FE2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080DD4EE
	mov r0, #160
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080DD6A0
	ldr r2, _080DD508  @ =0x00001062
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
_080DD4EE:
	pop {r4,r5}
	pop {r0}
	bx r0
_080DD4F4:
	.4byte gRam
_080DD4F8:
	.4byte 0x00001132
_080DD4FC:
	.4byte gUnknown_03003E70
_080DD500:
	.4byte 0x00000546
_080DD504:
	.4byte 0x00000F52
_080DD508:
	.4byte 0x00001062
_080DD50C:
	.4byte 0x00000FC2
_080DD510:
	.4byte 0x00001770
_080DD514:
	.4byte 0x00000FE2
	THUMB_FUNC_END sub_080DD474

