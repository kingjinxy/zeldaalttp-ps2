	THUMB_FUNC_START sub_08118D68
sub_08118D68: @ 0x08118D68
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r8, r5
	add r0, r5, #0
	bl sub_080C17A8
	ldr r6, _08118DE8  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r2, r6, r0
	ldrh r1, [r2]
	ldr r3, _08118DEC  @ =0x0000096C
	add r0, r6, r3
	strh r1, [r0]
	ldr r4, _08118DF0  @ =0x00000A92
	add r0, r6, r4
	add r7, r5, r0
	ldrb r0, [r7]
	sub r1, r1, r0
	strh r1, [r2]
	add r0, r5, #0
	bl sub_081189A4
	ldr r1, _08118DF4  @ =0x00001844
	add r0, r6, r1
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08118DC6
	mov r0, #9
	strb r0, [r2]
	ldr r2, _08118DF8  @ =0x00001818
	add r4, r6, r2
	add r4, r5, r4
	ldrb r0, [r4]
	add r0, r0, #1
	mov r1, #3
	bl __modsi3
	strb r0, [r4]
_08118DC6:
	ldr r3, _08118DF8  @ =0x00001818
	add r0, r6, r3
	add r0, r0, r8
	ldrb r1, [r0]
	ldr r4, _08118DFC  @ =0x00001732
	add r0, r6, r4
	strb r1, [r0]
	mov r3, #0
	ldrb r0, [r7]
	cmp r0, #0
	beq _08118E00
	mov r3, #1
	cmp r0, #31
	bhi _08118E10
	mov r3, #2
	b _08118E10
	.byte 0x00
	.byte 0x00
_08118DE8:
	.4byte gRam
_08118DEC:
	.4byte 0x0000096C
_08118DF0:
	.4byte 0x00000A92
_08118DF4:
	.4byte 0x00001844
_08118DF8:
	.4byte 0x00001818
_08118DFC:
	.4byte 0x00001732
_08118E00:
	ldr r2, _08118E38  @ =0x000009DA
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #6
	bne _08118E10
	add r0, r1, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
_08118E10:
	ldr r2, _08118E3C  @ =gRam
	ldr r4, _08118E40  @ =0x0000096C
	add r0, r2, r4
	ldrh r0, [r0]
	add r0, r0, #12
	sub r4, r4, #12
	add r1, r2, r4
	strh r0, [r1]
	ldr r0, _08118E44  @ =0x00000968
	add r2, r2, r0
	mov r0, #32
	strb r0, [r2]
	add r0, r3, #0
	bl sub_0811B82C
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08118E38:
	.4byte 0x000009DA
_08118E3C:
	.4byte gRam
_08118E40:
	.4byte 0x0000096C
_08118E44:
	.4byte 0x00000968
	THUMB_FUNC_END sub_08118D68

