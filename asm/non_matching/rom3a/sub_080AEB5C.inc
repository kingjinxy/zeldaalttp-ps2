	THUMB_FUNC_START sub_080AEB5C
sub_080AEB5C: @ 0x080AEB5C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r0, _080AEC78  @ =gRam
	mov r9, r0
	ldr r0, _080AEC7C  @ =0x00000DC5
	add r0, r0, r9
	add r0, r7, r0
	str r0, [sp]
	ldr r1, _080AEC80  @ =gUnknown_02006890
	ldrb r0, [r1]
	ldr r2, [sp]
	strb r0, [r2]
	ldr r0, _080AEC84  @ =0x00000DD9
	add r0, r0, r9
	add r0, r0, r7
	mov r10, r0
	ldr r6, _080AEC88  @ =gUnknown_02006891
	ldrb r0, [r6]
	mov r1, r10
	strb r0, [r1]
	ldr r0, _080AEC8C  @ =0x00000DCF
	add r0, r0, r9
	add r0, r7, r0
	str r0, [sp, #4]
	ldr r5, _080AEC90  @ =gUnknown_0200688E
	ldrb r0, [r5]
	ldr r2, [sp, #4]
	strb r0, [r2]
	ldr r0, _080AEC94  @ =0x00000DE3
	add r0, r0, r9
	add r0, r0, r7
	mov r8, r0
	ldr r4, _080AEC98  @ =gUnknown_0200688F
	ldrb r0, [r4]
	mov r1, r8
	strb r0, [r1]
	add r0, r7, #0
	bl sub_080BF774
	add r0, r7, #0
	bl sub_080C1768
	ldr r2, [sp]
	ldrb r0, [r2]
	ldr r1, _080AEC80  @ =gUnknown_02006890
	strb r0, [r1]
	mov r2, r10
	ldrb r0, [r2]
	strb r0, [r6]
	ldr r1, [sp, #4]
	ldrb r0, [r1]
	strb r0, [r5]
	mov r2, r8
	ldrb r0, [r2]
	strb r0, [r4]
	ldr r0, _080AEC9C  @ =0x00001827
	add r0, r0, r9
	add r4, r7, r0
	ldrb r1, [r4]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080AEBEE
	add r0, r7, #0
	mov r1, #42
	bl sub_080C19F8
_080AEBEE:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add r0, r7, #0
	mov r1, #0
	bl sub_080C09FC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080AEC10
	add r0, r7, #0
	mov r1, #0
	bl sub_080BFA64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080AECB8
_080AEC10:
	ldr r0, _080AECA0  @ =0x00000E3D
	add r0, r0, r9
	add r0, r7, r0
	ldrb r3, [r0]
	ldr r1, [sp]
	ldrb r0, [r1]
	mov r1, r10
	ldrb r2, [r1]
	lsl r2, r2, #8
	ldr r1, _080AECA4  @ =gUnknown_0816E840
	lsl r3, r3, #1
	add r1, r3, r1
	orr r0, r0, r2
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, [sp]
	strb r0, [r2]
	lsr r0, r0, #8
	mov r1, r10
	strb r0, [r1]
	ldr r2, [sp, #4]
	ldrb r0, [r2]
	mov r2, r8
	ldrb r1, [r2]
	lsl r1, r1, #8
	ldr r2, _080AECA8  @ =gUnknown_0816E848
	add r3, r3, r2
	orr r0, r0, r1
	ldrh r3, [r3]
	add r0, r0, r3
	ldr r1, [sp, #4]
	strb r0, [r1]
	lsr r0, r0, #8
	mov r2, r8
	strb r0, [r2]
	ldr r0, _080AECAC  @ =0x00000E15
	add r0, r0, r9
	add r0, r7, r0
	mov r1, #4
	strb r1, [r0]
	ldr r0, _080AECB0  @ =0x00000E33
	add r0, r0, r9
	add r0, r7, r0
	mov r1, #7
	strb r1, [r0]
	ldr r0, _080AECB4  @ =0x00000E5B
	add r0, r0, r9
	add r0, r7, r0
	mov r1, #16
	strb r1, [r0]
	b _080AECEE
	.byte 0x00
	.byte 0x00
_080AEC78:
	.4byte gRam
_080AEC7C:
	.4byte 0x00000DC5
_080AEC80:
	.4byte gUnknown_02006890
_080AEC84:
	.4byte 0x00000DD9
_080AEC88:
	.4byte gUnknown_02006891
_080AEC8C:
	.4byte 0x00000DCF
_080AEC90:
	.4byte gUnknown_0200688E
_080AEC94:
	.4byte 0x00000DE3
_080AEC98:
	.4byte gUnknown_0200688F
_080AEC9C:
	.4byte 0x00001827
_080AECA0:
	.4byte 0x00000E3D
_080AECA4:
	.4byte gUnknown_0816E840
_080AECA8:
	.4byte gUnknown_0816E848
_080AECAC:
	.4byte 0x00000E15
_080AECB0:
	.4byte 0x00000E33
_080AECB4:
	.4byte 0x00000E5B
_080AECB8:
	ldr r0, _080AECD8  @ =0x00001844
	add r0, r0, r9
	add r2, r7, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080AECDC
	add r0, r7, #0
	bl sub_080AED04
	b _080AECEE
_080AECD8:
	.4byte 0x00001844
_080AECDC:
	ldr r0, _080AED00  @ =0x00001733
	add r0, r0, r9
	mov r1, #4
	strb r1, [r0]
	mov r0, #2
	strb r0, [r2]
	add r0, r7, #0
	bl sub_080AED04
_080AECEE:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AED00:
	.4byte 0x00001733
	THUMB_FUNC_END sub_080AEB5C

