	THUMB_FUNC_START sub_080F5900
sub_080F5900: @ 0x080F5900
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080F5AA8
	cmp r0, #0
	beq _080F5970
	bl sub_08093078
	ldr r4, _080F5958  @ =gRam
	ldr r0, _080F595C  @ =0x000016F8
	add r1, r4, r0
	mov r0, #16
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #48
	bl sub_080C2CB4
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080F5960  @ =0x000016CD
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080F5964  @ =0x00000961
	add r0, r4, r3
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080F5968  @ =0x00000F52
	add r1, r4, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080F596C  @ =0x00000FC2
	add r4, r4, r0
	add r4, r5, r4
	mov r0, #48
	strb r0, [r4]
	b _080F5A42
_080F5958:
	.4byte gRam
_080F595C:
	.4byte 0x000016F8
_080F5960:
	.4byte 0x000016CD
_080F5964:
	.4byte 0x00000961
_080F5968:
	.4byte 0x00000F52
_080F596C:
	.4byte 0x00000FC2
_080F5970:
	ldr r2, _080F5A0C  @ =gRam
	ldr r1, _080F5A10  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080F5A42
	ldr r3, _080F5A14  @ =0x00000FC2
	add r0, r2, r3
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080F5A42
	ldr r1, _080F5A18  @ =0x00000EE2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	sub r3, r3, #192
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r3, _080F5A1C  @ =0x000016C4
	add r0, r2, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #40
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #71
	bhi _080F5A38
	ldr r1, _080F5A20  @ =0x00000ED2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r3, _080F5A24  @ =0x00000EF2
	add r0, r2, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	mov r3, #182
	lsl r3, r3, #5
	add r0, r2, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _080F5A38
	ldr r0, _080F5A28  @ =0x00000F72
	add r3, r2, r0
	add r3, r5, r3
	ldrb r0, [r3]
	add r0, r0, #1
	mov r1, #7
	and r0, r0, r1
	strb r0, [r3]
	ldr r0, _080F5A2C  @ =0x00000F92
	add r1, r2, r0
	add r1, r5, r1
	ldr r2, _080F5A30  @ =gUnknown_081798A0
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080F5A34  @ =gUnknown_081798A8
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r4]
	b _080F5A42
	.byte 0x00
	.byte 0x00
_080F5A0C:
	.4byte gRam
_080F5A10:
	.4byte 0x00000996
_080F5A14:
	.4byte 0x00000FC2
_080F5A18:
	.4byte 0x00000EE2
_080F5A1C:
	.4byte 0x000016C4
_080F5A20:
	.4byte 0x00000ED2
_080F5A24:
	.4byte 0x00000EF2
_080F5A28:
	.4byte 0x00000F72
_080F5A2C:
	.4byte 0x00000F92
_080F5A30:
	.4byte gUnknown_081798A0
_080F5A34:
	.4byte gUnknown_081798A8
_080F5A38:
	ldr r1, _080F5A48  @ =0x00000F92
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
_080F5A42:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F5A48:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080F5900

