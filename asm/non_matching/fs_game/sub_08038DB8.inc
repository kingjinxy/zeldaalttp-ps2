	THUMB_FUNC_START sub_08038DB8
sub_08038DB8: @ 0x08038DB8
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	ldr r0, _08038DE4  @ =gUnknown_03006C80
	ldr r1, [r0, #28]
	add r0, r1, #0
	mov r1, #60
	bl __udivsi3
	str r0, [r7]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_08038DD8:
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #6
	bls _08038DE8
	b _08038E14
	.byte 0x00
	.byte 0x00
_08038DE4:
	.4byte gUnknown_03006C80
_08038DE8:
	ldr r0, _08038E00  @ =gUnknown_0842ACD8
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r0, [r7]
	cmp r0, r1
	bcs _08038E04
	b _08038E14
	.byte 0x00
	.byte 0x00
_08038E00:
	.4byte gUnknown_0842ACD8
_08038E04:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08038DD8
_08038E14:
	ldr r0, _08038E34  @ =gUnknown_0842ACC4
	ldr r1, _08038E38  @ =gUnknown_03006C80
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	ldr r1, [r0]
	add r0, r2, r1
	ldrh r1, [r0]
	add r0, r1, #0
	b _08038E3C
	.byte 0x00
	.byte 0x00
_08038E34:
	.4byte gUnknown_0842ACC4
_08038E38:
	.4byte gUnknown_03006C80
_08038E3C:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08038DB8

