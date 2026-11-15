	THUMB_FUNC_START sub_080AC6E0
sub_080AC6E0: @ 0x080AC6E0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r6, r0, #24
	cmp r6, #0
	beq _080AC706
	mov r0, #0
	bl sub_080A3DA0
	b _080AC89A
_080AC706:
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #31
	bl sub_080C19F8
	ldr r4, _080AC7DC  @ =gRam
	mov r1, sp
	ldr r2, _080AC7E0  @ =0x00000E1F
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r6, [r0]
	mov r1, sp
	ldr r3, _080AC7E4  @ =0x00001855
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r6, [r0]
	mov r0, sp
	ldrb r0, [r0]
	ldr r1, _080AC7E8  @ =0x00000E29
	add r1, r1, r4
	mov r8, r1
	add r0, r0, r8
	mov r1, #255
	strb r1, [r0]
	mov r1, sp
	ldr r2, _080AC7EC  @ =0x00001818
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	sub r3, r3, #17
	add r7, r4, r3
	add r0, r0, r7
	mov r1, #3
	strb r1, [r0]
	mov r1, sp
	add r2, r2, #26
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #6
	strb r1, [r0]
	ldr r3, _080AC7F0  @ =0x000016D5
	add r0, r4, r3
	ldrb r0, [r0]
	lsr r5, r0, #1
	mov r1, sp
	ldr r2, _080AC7F4  @ =0x00000E3D
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r5, [r0]
	mov r0, sp
	ldr r3, _080AC7F8  @ =0x00000DED
	add r1, r4, r3
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080AC7FC  @ =gUnknown_0816E184
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, sp
	sub r2, r2, #70
	add r1, r4, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080AC800  @ =gUnknown_0816E188
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABB30
	lsl r0, r0, #24
	cmp r0, #0
	beq _080AC810
	mov r1, sp
	ldr r3, _080AC804  @ =0x00000E15
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #17
	strb r1, [r0]
	mov r1, sp
	ldr r2, _080AC808  @ =0x00000E5B
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r1, _080AC80C  @ =gUnknown_08226484
	ldrb r1, [r1, #16]
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	add r0, r0, r8
	strb r6, [r0]
	mov r0, sp
	ldrb r0, [r0]
	add r0, r0, r7
	mov r1, #4
	strb r1, [r0]
	b _080AC89A
_080AC7DC:
	.4byte gRam
_080AC7E0:
	.4byte 0x00000E1F
_080AC7E4:
	.4byte 0x00001855
_080AC7E8:
	.4byte 0x00000E29
_080AC7EC:
	.4byte 0x00001818
_080AC7F0:
	.4byte 0x000016D5
_080AC7F4:
	.4byte 0x00000E3D
_080AC7F8:
	.4byte 0x00000DED
_080AC7FC:
	.4byte gUnknown_0816E184
_080AC800:
	.4byte gUnknown_0816E188
_080AC804:
	.4byte 0x00000E15
_080AC808:
	.4byte 0x00000E5B
_080AC80C:
	.4byte gUnknown_08226484
_080AC810:
	mov r0, #182
	lsl r0, r0, #5
	add r3, r4, r0
	ldr r0, _080AC878  @ =gUnknown_0816E174
	lsl r2, r5, #1
	add r0, r2, r0
	ldrh r1, [r0]
	ldrh r3, [r3]
	add r1, r1, r3
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	sub r3, r3, #8
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	add r3, r3, #16
	add r0, r4, r3
	strh r1, [r0]
	ldr r0, _080AC87C  @ =0x000016C4
	add r3, r4, r0
	ldr r0, _080AC880  @ =gUnknown_0816E17C
	add r2, r2, r0
	ldrh r1, [r2]
	ldrh r3, [r3]
	add r1, r1, r3
	ldr r2, _080AC884  @ =0x00000964
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _080AC888  @ =0x00000952
	add r0, r4, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	add r2, r2, #8
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #23
	add r0, r4, r3
	add r2, r2, #1
	add r1, r4, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _080AC88C
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
	b _080AC89A
	.byte 0x00
	.byte 0x00
_080AC878:
	.4byte gUnknown_0816E174
_080AC87C:
	.4byte 0x000016C4
_080AC880:
	.4byte gUnknown_0816E17C
_080AC884:
	.4byte 0x00000964
_080AC888:
	.4byte 0x00000952
_080AC88C:
	mov r0, sp
	ldr r3, _080AC8A8  @ =0x00000E15
	add r1, r4, r3
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #0
	strb r0, [r1]
_080AC89A:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AC8A8:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_080AC6E0

