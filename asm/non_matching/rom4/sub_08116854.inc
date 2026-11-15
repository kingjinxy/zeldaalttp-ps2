	THUMB_FUNC_START sub_08116854
sub_08116854: @ 0x08116854
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811690C
	ldr r0, _08116880  @ =gRam
	ldr r1, _08116884  @ =0x00001663
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #8
	bne _08116888
	mov r0, #20
	bl Sound_SetSfxPanWithPlayerCoords
	b _0811688E
_08116880:
	.4byte gRam
_08116884:
	.4byte 0x00001663
_08116888:
	mov r0, #21
	bl Sound_SetSfxPanWithPlayerCoords
_0811688E:
	ldr r2, _08116914  @ =gRam
	mov r1, sp
	ldr r3, _08116918  @ =0x00000E29
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r3, #0
	strb r3, [r0]
	mov r1, sp
	ldr r4, _0811691C  @ =0x00000E1F
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r3, [r0]
	mov r1, sp
	ldr r5, _08116920  @ =0x00001844
	add r0, r2, r5
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	ldr r0, _08116924  @ =0x00001787
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _08116928  @ =0x00001754
	add r3, r2, r1
	ldrb r0, [r3]
	ldr r4, _0811692C  @ =gUnknown_0200EBA0
	add r0, r0, r4
	ldrb r0, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r4, r2, r5
	strb r0, [r4]
	ldrb r0, [r3]
	ldr r1, _08116930  @ =gUnknown_0200EBB4
	add r0, r0, r1
	ldrb r1, [r0]
	add r5, r5, #1
	add r0, r2, r5
	strb r1, [r0]
	ldrb r0, [r3]
	ldr r1, _08116934  @ =gUnknown_0200EBC8
	add r0, r0, r1
	ldrb r1, [r0]
	add r5, r5, #3
	add r0, r2, r5
	strb r1, [r0]
	ldrb r0, [r3]
	ldr r1, _08116938  @ =gUnknown_0200EBDC
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r3, _0811693C  @ =0x00000965
	add r2, r2, r3
	strb r0, [r2]
	ldrh r0, [r4]
	add r0, r0, #4
	strh r0, [r4]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_0811690C:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_08116914:
	.4byte gRam
_08116918:
	.4byte 0x00000E29
_0811691C:
	.4byte 0x00000E1F
_08116920:
	.4byte 0x00001844
_08116924:
	.4byte 0x00001787
_08116928:
	.4byte 0x00001754
_0811692C:
	.4byte gUnknown_0200EBA0
_08116930:
	.4byte gUnknown_0200EBB4
_08116934:
	.4byte gUnknown_0200EBC8
_08116938:
	.4byte gUnknown_0200EBDC
_0811693C:
	.4byte 0x00000965
	THUMB_FUNC_END sub_08116854

