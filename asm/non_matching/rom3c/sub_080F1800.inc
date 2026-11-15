	THUMB_FUNC_START sub_080F1800
sub_080F1800: @ 0x080F1800
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080F1838  @ =gRam
	ldr r0, _080F183C  @ =0x00001172
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F1840  @ =0x00001663
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #9
	beq _080F1848
	sub r1, r1, #1
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080F1852
	ldr r1, _080F1844  @ =0x00000F52
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #4
	b _080F1850
	.byte 0x00
	.byte 0x00
_080F1838:
	.4byte gRam
_080F183C:
	.4byte 0x00001172
_080F1840:
	.4byte 0x00001663
_080F1844:
	.4byte 0x00000F52
_080F1848:
	ldr r1, _080F1858  @ =0x00000FA2
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #0
_080F1850:
	strb r1, [r0]
_080F1852:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F1858:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F1800

