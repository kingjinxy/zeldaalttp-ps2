	THUMB_FUNC_START sub_08111E58
sub_08111E58: @ 0x08111E58
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	mov r1, #3
	ldr r3, _08111EC8  @ =gRam
	ldr r5, _08111ECC  @ =0x00000996
	add r0, r3, r5
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _08111E7C
	ldr r0, _08111ED0  @ =0x00000F92
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08111E7C:
	ldr r1, _08111ED0  @ =0x00000F92
	add r0, r3, r1
	add r5, r2, r0
	ldrb r0, [r5]
	cmp r0, #9
	bne _08111E8C
	mov r0, #0
	strb r0, [r5]
_08111E8C:
	ldr r2, _08111ED4  @ =0x00000F12
	add r0, r3, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r2, r2, #16
	add r0, r3, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _08111ED8  @ =0x00000FC2
	add r0, r3, r1
	add r1, r4, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _08111EC2
	mov r0, #48
	strb r0, [r1]
	ldr r1, _08111EDC  @ =0x00000F62
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	sub r1, r1, #16
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	strb r2, [r5]
_08111EC2:
	pop {r4,r5}
	pop {r0}
	bx r0
_08111EC8:
	.4byte gRam
_08111ECC:
	.4byte 0x00000996
_08111ED0:
	.4byte 0x00000F92
_08111ED4:
	.4byte 0x00000F12
_08111ED8:
	.4byte 0x00000FC2
_08111EDC:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_08111E58

