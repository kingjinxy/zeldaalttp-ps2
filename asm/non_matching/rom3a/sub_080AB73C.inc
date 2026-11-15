	THUMB_FUNC_START sub_080AB73C
sub_080AB73C: @ 0x080AB73C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r4, #5
	mov r0, #255
	mov r12, r0
	ldr r5, _080AB774  @ =gRam
	ldr r1, _080AB778  @ =0x00000E15
	add r7, r5, r1
	ldr r2, _080AB77C  @ =0x0000177A
	add r2, r2, r5
	mov r10, r2
	ldr r0, _080AB780  @ =0x00001719
	add r0, r0, r5
	mov r9, r0
	ldr r1, _080AB784  @ =0x00001791
	add r1, r1, r5
	mov r8, r1
	mov r6, #0
_080AB766:
	add r0, r4, r7
	ldrb r0, [r0]
	cmp r0, #62
	bne _080AB788
	mov r12, r4
	b _080AB7A8
	.byte 0x00
	.byte 0x00
_080AB774:
	.4byte gRam
_080AB778:
	.4byte 0x00000E15
_080AB77C:
	.4byte 0x0000177A
_080AB780:
	.4byte 0x00001719
_080AB784:
	.4byte 0x00001791
_080AB788:
	cmp r0, #44
	bne _080AB7A8
	mov r2, #0
	ldr r0, _080AB7C0  @ =gUnknown_03002DF4
	strb r2, [r0]
	ldr r1, _080AB7C4  @ =gRam
	ldr r0, _080AB7C8  @ =0x000016FA
	add r3, r1, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080AB7A8
	strb r2, [r3]
	mov r1, r9
	strb r2, [r1]
_080AB7A8:
	mov r2, r8
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	bge _080AB7CC
	add r0, r4, #1
	mov r1, r10
	ldrb r1, [r1]
	cmp r0, r1
	beq _080AB7DE
	b _080AB7DA
	.byte 0x00
	.byte 0x00
_080AB7C0:
	.4byte gUnknown_03002DF4
_080AB7C4:
	.4byte gRam
_080AB7C8:
	.4byte 0x000016FA
_080AB7CC:
	add r0, r4, #1
	ldr r2, _080AB874  @ =0x0000177A
	add r1, r5, r2
	ldrb r2, [r1]
	cmp r0, r2
	bne _080AB7DA
	strb r6, [r1]
_080AB7DA:
	add r0, r4, r7
	strb r6, [r0]
_080AB7DE:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _080AB766
	add r2, r5, #0
	ldr r0, _080AB878  @ =0x0000180C
	add r4, r2, r0
	ldrb r1, [r4]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080AB802
	ldr r0, _080AB87C  @ =0x000016F8
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
	strb r0, [r4]
_080AB802:
	ldr r1, _080AB880  @ =0x00001886
	add r0, r5, r1
	mov r1, #0
	strb r1, [r0]
	mov r2, #188
	lsl r2, r2, #5
	add r0, r5, r2
	mov r3, #0
	strh r1, [r0]
	ldr r1, _080AB884  @ =0x000017F0
	add r0, r5, r1
	strb r3, [r0]
	ldr r2, _080AB888  @ =0x00001894
	add r0, r5, r2
	strb r3, [r0]
	add r1, r1, #29
	add r0, r5, r1
	strb r3, [r0]
	add r2, r2, #1
	add r0, r5, r2
	strb r3, [r0]
	sub r1, r1, #28
	add r0, r5, r1
	strb r3, [r0]
	ldr r2, _080AB88C  @ =0x00001718
	add r1, r5, r2
	ldrb r0, [r1]
	cmp r0, #19
	bne _080AB864
	strb r3, [r1]
	ldr r0, _080AB890  @ =0x000016E8
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080AB894  @ =0x00001705
	add r2, r5, r1
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r4]
	mov r0, #251
	and r0, r0, r1
	strb r0, [r4]
	ldr r2, _080AB898  @ =0x00001810
	add r0, r5, r2
	strb r3, [r0]
_080AB864:
	mov r0, r12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_080AB874:
	.4byte 0x0000177A
_080AB878:
	.4byte 0x0000180C
_080AB87C:
	.4byte 0x000016F8
_080AB880:
	.4byte 0x00001886
_080AB884:
	.4byte 0x000017F0
_080AB888:
	.4byte 0x00001894
_080AB88C:
	.4byte 0x00001718
_080AB890:
	.4byte 0x000016E8
_080AB894:
	.4byte 0x00001705
_080AB898:
	.4byte 0x00001810
	THUMB_FUNC_END sub_080AB73C

