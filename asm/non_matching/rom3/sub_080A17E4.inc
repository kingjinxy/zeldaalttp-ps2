	THUMB_FUNC_START sub_080A17E4
sub_080A17E4: @ 0x080A17E4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080A180C  @ =gRam
	ldr r1, _080A1810  @ =0x000016E9
	add r0, r2, r1
	ldrb r1, [r0]
	mov r4, #128
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080A1806
	ldr r1, _080A1814  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A1818
_080A1806:
	mov r0, #0
	b _080A184C
	.byte 0x00
	.byte 0x00
_080A180C:
	.4byte gRam
_080A1810:
	.4byte 0x000016E9
_080A1814:
	.4byte 0x000016F8
_080A1818:
	cmp r3, #0
	bne _080A182C
	ldr r1, _080A1828  @ =0x00000546
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r4, #0
	b _080A1834
	.byte 0x00
	.byte 0x00
_080A1828:
	.4byte 0x00000546
_080A182C:
	ldr r1, _080A1854  @ =0x00000547
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
_080A1834:
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	beq _080A184A
	ldr r0, _080A1858  @ =0x000016E9
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
_080A184A:
	add r0, r3, #0
_080A184C:
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080A1854:
	.4byte 0x00000547
_080A1858:
	.4byte 0x000016E9
	THUMB_FUNC_END sub_080A17E4

