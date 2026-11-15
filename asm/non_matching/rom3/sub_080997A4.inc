	THUMB_FUNC_START sub_080997A4
sub_080997A4: @ 0x080997A4
	push {r4-r7,lr}
	mov r2, #3
	ldr r3, _0809988C  @ =gRam
	ldr r0, _08099890  @ =0x000016CE
	add r7, r3, r0
	mov r0, #0
	ldrsb r0, [r7, r0]
	cmp r0, #0
	bge _080997B8
	mov r2, #2
_080997B8:
	ldr r1, _08099894  @ =0x00001726
	add r0, r3, r1
	mov r1, #0
	strb r2, [r0]
	ldr r4, _08099898  @ =0x00001705
	add r0, r3, r4
	strb r1, [r0]
	sub r4, r4, #56
	add r0, r3, r4
	strb r1, [r0]
	ldr r4, _0809989C  @ =0x000017E1
	add r0, r3, r4
	strb r1, [r0]
	ldr r1, _080998A0  @ =0x000016F8
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08099882
	add r4, r4, #18
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _08099882
	add r1, r1, #32
	add r0, r3, r1
	ldrb r1, [r0]
	sub r1, r1, #15
	lsl r1, r1, #2
	mov r4, #150
	lsl r4, r4, #4
	add r0, r3, r4
	strb r1, [r0]
	mov r0, #253
	and r2, r2, r0
	lsl r0, r2, #1
	add r1, r1, r0
	lsl r1, r1, #24
	ldr r0, _080998A4  @ =0x000016C4
	add r5, r3, r0
	ldrh r6, [r5]
	ldr r2, _080998A8  @ =gUnknown_08167EA8
	lsr r0, r1, #24
	add r0, r0, r2
	ldrh r0, [r0]
	add r0, r6, r0
	strh r0, [r5]
	lsr r4, r1, #26
	ldr r0, _080998AC  @ =gUnknown_08167EB4
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #2
	bne _08099822
	mov r1, #254
_08099822:
	strb r1, [r7]
	ldr r1, _080998B0  @ =0x000016C8
	add r2, r3, r1
	ldrb r1, [r2]
	cmp r1, #255
	bne _08099830
	mov r1, #0
_08099830:
	ldr r0, _080998B4  @ =gUnknown_08167EB6
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldr r7, _080998B8  @ =0x000017F6
	add r1, r3, r7
	strh r0, [r1]
	strb r0, [r2]
	mov r0, #182
	lsl r0, r0, #5
	add r1, r3, r0
	ldr r2, _080998BC  @ =gUnknown_08167EB0
	lsl r0, r4, #1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldrb r1, [r1]
	ldr r4, _080998C0  @ =0x000016EC
	add r0, r3, r4
	strb r1, [r0]
	ldr r7, _080998C4  @ =0x000016C1
	add r0, r3, r7
	ldrb r1, [r0]
	ldr r2, _080998C8  @ =0x000016ED
	add r0, r3, r2
	strb r1, [r0]
	strh r6, [r5]
	ldr r4, _080998CC  @ =0x000009B2
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08099882
	mov r7, #161
	lsl r7, r7, #4
	add r1, r3, r7
	mov r0, #2
	strb r0, [r1]
_08099882:
	bl sub_08099598
	pop {r4-r7}
	pop {r0}
	bx r0
_0809988C:
	.4byte gRam
_08099890:
	.4byte 0x000016CE
_08099894:
	.4byte 0x00001726
_08099898:
	.4byte 0x00001705
_0809989C:
	.4byte 0x000017E1
_080998A0:
	.4byte 0x000016F8
_080998A4:
	.4byte 0x000016C4
_080998A8:
	.4byte gUnknown_08167EA8
_080998AC:
	.4byte gUnknown_08167EB4
_080998B0:
	.4byte 0x000016C8
_080998B4:
	.4byte gUnknown_08167EB6
_080998B8:
	.4byte 0x000017F6
_080998BC:
	.4byte gUnknown_08167EB0
_080998C0:
	.4byte 0x000016EC
_080998C4:
	.4byte 0x000016C1
_080998C8:
	.4byte 0x000016ED
_080998CC:
	.4byte 0x000009B2
	THUMB_FUNC_END sub_080997A4

