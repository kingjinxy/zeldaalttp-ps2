	THUMB_FUNC_START sub_08110CAC
sub_08110CAC: @ 0x08110CAC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08110CE0  @ =gRam
	ldr r1, _08110CE4  @ =0x00000545
	add r4, r2, r1
	ldr r3, _08110CE8  @ =gUnknown_0817D4CC
	ldr r5, _08110CEC  @ =0x00000FB2
	add r1, r2, r5
	add r5, r0, r1
	ldrb r0, [r5]
	add r0, r0, r3
	ldrb r1, [r4]
	ldrb r3, [r0]
	and r3, r3, r1
	mov r0, #150
	lsl r0, r0, #4
	add r2, r2, r0
	strb r3, [r2]
	mov r0, #8
	and r0, r0, r3
	cmp r0, #0
	beq _08110CF0
	mov r0, #0
	b _08110D14
	.byte 0x00
	.byte 0x00
_08110CE0:
	.4byte gRam
_08110CE4:
	.4byte 0x00000545
_08110CE8:
	.4byte gUnknown_0817D4CC
_08110CEC:
	.4byte 0x00000FB2
_08110CF0:
	mov r0, #4
	and r0, r0, r3
	cmp r0, #0
	beq _08110CFC
	mov r0, #1
	b _08110D14
_08110CFC:
	mov r1, #2
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08110D0A
	strb r1, [r5]
	b _08110D16
_08110D0A:
	mov r0, #1
	and r0, r0, r3
	cmp r0, #0
	beq _08110D16
	mov r0, #3
_08110D14:
	strb r0, [r5]
_08110D16:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08110CAC

