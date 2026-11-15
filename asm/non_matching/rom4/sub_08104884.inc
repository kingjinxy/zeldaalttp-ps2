	THUMB_FUNC_START sub_08104884
sub_08104884: @ 0x08104884
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r6, _0810492C  @ =gRam
	ldr r1, _08104930  @ =0x00000FC2
	add r0, r6, r1
	add r7, r4, r0
	ldrb r0, [r7]
	sub r0, r0, #64
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bhi _081048AA
	add r0, r4, #0
	bl sub_080DBD34
_081048AA:
	ldr r2, _08104934  @ =0x00000F92
	add r0, r6, r2
	add r5, r4, r0
	mov r0, #0
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C36D8
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _08104938  @ =0x0000097D
	add r0, r6, r2
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _081048D6
	ldr r0, _0810493C  @ =gUnknown_0817BCC6
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r5]
_081048D6:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08104960
	ldrb r3, [r7]
	add r5, r3, #0
	cmp r5, #0
	bne _08104944
	add r0, r4, #0
	bl sub_080C99DC
	add r0, r4, #0
	bl sub_080C7A20
	ldr r1, _08104940  @ =0x00001152
	add r0, r6, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
	sub r1, r1, #16
	add r0, r6, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08104960
	strb r5, [r3]
	mov r0, #32
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #16
	bl sub_080C35FC
	add r0, r4, #0
	mov r1, #13
	bl sub_080CF0AC
	b _08104960
	.byte 0x00
	.byte 0x00
_0810492C:
	.4byte gRam
_08104930:
	.4byte 0x00000FC2
_08104934:
	.4byte 0x00000F92
_08104938:
	.4byte 0x0000097D
_0810493C:
	.4byte gUnknown_0817BCC6
_08104940:
	.4byte 0x00001152
_08104944:
	ldr r2, _0810496C  @ =0x00000F22
	add r1, r6, r2
	add r1, r1, r8
	ldr r2, _08104970  @ =gUnknown_0817BCC8
	mov r0, #2
	and r0, r0, r3
	lsl r0, r0, #24
	lsr r0, r0, #25
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, r8
	bl Sprite3_MoveHoriz
_08104960:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810496C:
	.4byte 0x00000F22
_08104970:
	.4byte gUnknown_0817BCC8
	THUMB_FUNC_END sub_08104884

