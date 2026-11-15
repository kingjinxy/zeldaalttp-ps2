	THUMB_FUNC_START sub_080C7B1C
sub_080C7B1C: @ 0x080C7B1C
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C8178
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	ldr r0, _080C7B8C  @ =gRam
	ldr r1, _080C7B90  @ =0x00001072
	add r0, r0, r1
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _080C7B50
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C7B4A
	mov r0, #0
	strb r0, [r2]
_080C7B4A:
	add r0, r4, #0
	bl sub_080C3540
_080C7B50:
	ldr r5, _080C7B8C  @ =gRam
	ldr r1, _080C7B94  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #31
	bhi _080C7B66
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
_080C7B66:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C7BB4
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080C7B98  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C7B9C
	add r0, r4, #0
	bl sub_080C7BC0
	b _080C7BB4
_080C7B8C:
	.4byte gRam
_080C7B90:
	.4byte 0x00001072
_080C7B94:
	.4byte 0x00000FC2
_080C7B98:
	.4byte 0x00001062
_080C7B9C:
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _080C7BBC  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C7BB4
	add r0, r4, #0
	bl sub_080C811C
_080C7BB4:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080C7BBC:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080C7B1C

