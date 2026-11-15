	THUMB_FUNC_START sub_080C2B14
sub_080C2B14: @ 0x080C2B14
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r12, r4
	mov r7, #0
	ldr r5, _080C2B88  @ =gRam
	ldr r1, _080C2B8C  @ =0x00000D74
	add r0, r5, r1
	add r3, r4, r0
	ldrb r6, [r3]
	cmp r6, #0
	beq _080C2BA2
	ldr r2, _080C2B90  @ =0x000009AD
	add r0, r5, r2
	ldr r2, _080C2B94  @ =0x00001605
	add r1, r5, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080C2BA2
	ldr r1, _080C2B98  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r2, #1
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080C2B54
	sub r0, r6, #1
	strb r0, [r3]
_080C2B54:
	ldrb r0, [r3]
	cmp r0, #0
	bne _080C2B62
	ldr r1, _080C2B9C  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	strb r7, [r0]
_080C2B62:
	ldrb r1, [r3]
	cmp r1, #39
	bhi _080C2BA2
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080C2BA2
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	mov r2, r12
	bl sub_080C631C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C2BA0
	mov r0, #0
	b _080C2BA4
	.byte 0x00
	.byte 0x00
_080C2B88:
	.4byte gRam
_080C2B8C:
	.4byte 0x00000D74
_080C2B90:
	.4byte 0x000009AD
_080C2B94:
	.4byte 0x00001605
_080C2B98:
	.4byte 0x00000996
_080C2B9C:
	.4byte 0x00000FA2
_080C2BA0:
	mov r7, #1
_080C2BA2:
	add r0, r7, #0
_080C2BA4:
	add sp, sp, #4
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C2B14

