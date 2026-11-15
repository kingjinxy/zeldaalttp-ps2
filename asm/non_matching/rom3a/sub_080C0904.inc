	THUMB_FUNC_START sub_080C0904
sub_080C0904: @ 0x080C0904
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080C094C  @ =gRam
	ldr r1, _080C0950  @ =0x000009AD
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C0960
	ldr r3, _080C0954  @ =0x00000E33
	add r0, r2, r3
	add r1, r4, r0
	ldrb r3, [r1]
	cmp r3, #0
	bne _080C0960
	mov r0, #4
	strb r0, [r1]
	ldr r0, _080C0958  @ =0x00000E29
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _080C0960
	ldr r1, _080C095C  @ =0x00000E15
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	b _080C09C6
	.byte 0x00
	.byte 0x00
_080C094C:
	.4byte gRam
_080C0950:
	.4byte 0x000009AD
_080C0954:
	.4byte 0x00000E33
_080C0958:
	.4byte 0x00000E29
_080C095C:
	.4byte 0x00000E15
_080C0960:
	add r0, r4, #0
	mov r1, #4
	bl sub_080C18C8
	ldr r5, _080C09D4  @ =gRam
	ldr r2, _080C09D8  @ =0x00000E51
	add r1, r5, r2
	add r1, r4, r1
	mov r3, #0
	mov r8, r3
	strb r0, [r1]
	ldr r1, _080C09DC  @ =0x00000952
	add r0, r5, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r3, _080C09E0  @ =0x00000958
	add r0, r5, r3
	mov r3, #0
	ldrsh r2, [r0, r3]
	add r0, r4, #0
	bl sub_080BF174
	ldr r1, _080C09E4  @ =0x00000E29
	add r0, r5, r1
	add r0, r4, r0
	ldrb r6, [r0]
	ldr r0, _080C09E8  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r2, _080C09EC  @ =0x00000964
	add r1, r5, r2
	ldrh r1, [r1]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	ldrh r2, [r2]
	ldr r3, _080C09F0  @ =gUnknown_08171D05
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080C09F4  @ =gUnknown_08171D08
	add r6, r6, r4
	ldr r4, _080C09F8  @ =0x00001724
	add r5, r5, r4
	ldrb r6, [r6]
	ldrb r4, [r5]
	orr r4, r4, r6
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, r8
	str r4, [sp]
	bl sub_080C6450
_080C09C6:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C09D4:
	.4byte gRam
_080C09D8:
	.4byte 0x00000E51
_080C09DC:
	.4byte 0x00000952
_080C09E0:
	.4byte 0x00000958
_080C09E4:
	.4byte 0x00000E29
_080C09E8:
	.4byte gUnknown_03003E74
_080C09EC:
	.4byte 0x00000964
_080C09F0:
	.4byte gUnknown_08171D05
_080C09F4:
	.4byte gUnknown_08171D08
_080C09F8:
	.4byte 0x00001724
	THUMB_FUNC_END sub_080C0904

