	THUMB_FUNC_START sub_08125874
sub_08125874: @ 0x08125874
	push {r4-r6,lr}
	ldr r1, _081258AC  @ =gRam
	ldr r0, _081258B0  @ =0x00001B08
	add r6, r1, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _081258A6
	ldr r0, _081258B4  @ =0x00001B16
	add r5, r1, r0
	ldrb r4, [r5]
	cmp r4, #0
	bne _081258A6
	bl sub_08125EA0
	bl sub_081258B8
	bl sub_0812541C
	bl sub_081254E4
	bl sub_08125694
	strb r4, [r6]
	mov r0, #255
	strb r0, [r5]
_081258A6:
	pop {r4-r6}
	pop {r0}
	bx r0
_081258AC:
	.4byte gRam
_081258B0:
	.4byte 0x00001B08
_081258B4:
	.4byte 0x00001B16
	THUMB_FUNC_END sub_08125874

