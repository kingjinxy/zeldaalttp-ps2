	THUMB_FUNC_START sub_081206B0
sub_081206B0: @ 0x081206B0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r3, r1, #0
	ldr r0, _081206D4  @ =gUnknown_020069B4
	ldrb r0, [r0]
	cmp r0, #0
	bne _081206F8
	ldr r0, _081206D8  @ =gRam
	ldr r2, _081206DC  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _081206E0
	add r0, r1, #0
	bl sub_0812075C
	b _08120756
_081206D4:
	.4byte gUnknown_020069B4
_081206D8:
	.4byte gRam
_081206DC:
	.4byte 0x000009AD
_081206E0:
	mov r0, #9
_081206E2:
	lsl r4, r0, #24
	lsr r0, r4, #24
	bl sub_08120D24
	mov r3, #255
	lsl r3, r3, #24
	add r4, r4, r3
	lsr r0, r4, #24
	cmp r4, #0
	bge _081206E2
	b _08120756
_081206F8:
	cmp r0, #1
	bne _08120718
	ldr r0, _08120710  @ =gRam
	ldr r4, _08120714  @ =0x000009AD
	add r0, r0, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _08120756
	add r0, r1, #0
	bl sub_08120A1C
	b _08120756
_08120710:
	.4byte gRam
_08120714:
	.4byte 0x000009AD
_08120718:
	ldr r2, _08120744  @ =gRam
	ldr r4, _08120748  @ =0x000009AD
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _08120750
	ldr r3, _0812074C  @ =0x00000E1F
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	lsl r4, r0, #24
	cmp r4, #0
	blt _08120756
_08120732:
	lsr r0, r4, #24
	bl sub_08120E98
	mov r0, #255
	lsl r0, r0, #24
	add r4, r4, r0
	cmp r4, #0
	bge _08120732
	b _08120756
_08120744:
	.4byte gRam
_08120748:
	.4byte 0x000009AD
_0812074C:
	.4byte 0x00000E1F
_08120750:
	add r0, r3, #0
	bl sub_08120AB8
_08120756:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081206B0

