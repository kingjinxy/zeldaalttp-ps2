	THUMB_FUNC_START sub_08108BEC
sub_08108BEC: @ 0x08108BEC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_08107D50
	add r0, r4, #0
	bl sub_08107D50
	ldr r1, _08108C34  @ =gRam
	ldr r2, _08108C38  @ =0x00000FC2
	add r0, r1, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _08108C2C
	sub r2, r2, #112
	add r0, r1, r2
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #48
	bl sub_080C35FC
	mov r0, #64
	strb r0, [r5]
	mov r0, #44
	mov r1, #0
	bl sub_0812A324
_08108C2C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08108C34:
	.4byte gRam
_08108C38:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_08108BEC

