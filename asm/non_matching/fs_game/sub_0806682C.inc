	THUMB_FUNC_START sub_0806682C
sub_0806682C: @ 0x0806682C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	ldr r2, _0806684C  @ =0x00000201
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08066850
	mov r0, #1
	b _0806689A
_0806684C:
	.4byte 0x00000201
_08066850:
	ldr r0, [r7]
	ldrb r1, [r0, #2]
	cmp r1, #0
	beq _0806685C
	mov r0, #1
	b _0806689A
_0806685C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #60
	ldrb r0, [r1]
	cmp r0, #0
	bne _08066878
	ldr r0, [r7]
	ldr r1, [r0, #40]
	add r0, r1, #0
	add r1, r1, #69
	ldrb r0, [r1]
	cmp r0, #0
	bne _0806687C
	b _08066878
_08066878:
	mov r0, #1
	b _0806689A
_0806687C:
	ldr r0, [r7]
	ldr r1, [r0, #40]
	ldrb r0, [r1, #20]
	cmp r0, #2
	beq _08066892
	ldr r0, [r7]
	ldr r1, [r0, #40]
	ldrb r0, [r1, #20]
	cmp r0, #3
	beq _08066892
	b _08066896
_08066892:
	mov r0, #1
	b _0806689A
_08066896:
	mov r0, #0
	b _0806689A
_0806689A:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0806682C

	.byte 0x00
	.byte 0x00
