	THUMB_FUNC_START sub_080C9CAC
sub_080C9CAC: @ 0x080C9CAC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #108
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080CA078  @ =gRam
	ldr r1, _080CA07C  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	str r0, [sp]
	ldrb r0, [r0]
	lsl r0, r0, #24
	mov r8, r0
	ldr r2, _080CA080  @ =0x00000FF2
	add r0, r5, r2
	add r0, r4, r0
	str r0, [sp, #4]
	ldrb r0, [r0]
	lsl r0, r0, #16
	mov r3, r8
	orr r3, r3, r0
	ldr r6, _080CA084  @ =0x00000EE2
	add r0, r5, r6
	add r0, r4, r0
	str r0, [sp, #8]
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r3, r3, r0
	ldr r7, _080CA088  @ =0x00000F02
	add r0, r5, r7
	add r0, r4, r0
	str r0, [sp, #12]
	ldrb r0, [r0]
	orr r3, r3, r0
	mov r8, r3
	sub r1, r1, #208
	add r0, r5, r1
	add r0, r4, r0
	str r0, [sp, #16]
	ldrb r0, [r0]
	lsl r3, r0, #24
	ldr r2, _080CA08C  @ =0x00000EF2
	add r0, r5, r2
	add r0, r4, r0
	str r0, [sp, #20]
	ldrb r0, [r0]
	lsl r0, r0, #16
	orr r3, r3, r0
	add r6, r6, #176
	add r0, r5, r6
	add r0, r4, r0
	str r0, [sp, #24]
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r3, r3, r0
	add r7, r7, #96
	add r0, r5, r7
	add r0, r4, r0
	str r0, [sp, #28]
	ldrb r0, [r0]
	orr r3, r3, r0
	ldr r1, _080CA090  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	str r0, [sp, #32]
	ldrb r0, [r0]
	lsl r2, r0, #24
	ldr r6, _080CA094  @ =0x00001122
	add r0, r5, r6
	add r0, r4, r0
	str r0, [sp, #36]
	ldrb r0, [r0]
	lsl r0, r0, #16
	orr r2, r2, r0
	ldr r7, _080CA098  @ =0x00000D94
	add r0, r5, r7
	add r0, r4, r0
	str r0, [sp, #40]
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	sub r1, r1, #208
	add r0, r5, r1
	add r0, r4, r0
	str r0, [sp, #44]
	ldrb r0, [r0]
	orr r2, r2, r0
	ldr r6, _080CA09C  @ =0x00001012
	add r0, r5, r6
	add r0, r4, r0
	str r0, [sp, #48]
	ldrb r0, [r0]
	lsl r1, r0, #24
	ldr r7, _080CA0A0  @ =0x000010F2
	add r0, r5, r7
	add r0, r4, r0
	str r0, [sp, #52]
	ldrb r0, [r0]
	lsl r0, r0, #16
	orr r1, r1, r0
	sub r6, r6, #192
	add r0, r5, r6
	add r0, r4, r0
	str r0, [sp, #56]
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	sub r7, r7, #192
	add r0, r5, r7
	add r0, r4, r0
	str r0, [sp, #60]
	ldrb r0, [r0]
	orr r1, r1, r0
	add r6, r6, #32
	add r0, r5, r6
	add r0, r4, r0
	str r0, [sp, #64]
	ldrb r0, [r0]
	lsl r0, r0, #24
	str r0, [sp, #104]
	sub r7, r7, #176
	add r0, r5, r7
	add r0, r4, r0
	str r0, [sp, #68]
	ldrb r0, [r0]
	lsl r0, r0, #16
	ldr r6, [sp, #104]
	orr r6, r6, r0
	add r7, r7, #224
	add r0, r5, r7
	add r0, r4, r0
	str r0, [sp, #72]
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r6, r6, r0
	str r6, [sp, #104]
	ldr r6, _080CA0A4  @ =0x00001052
	add r0, r5, r6
	add r0, r4, r0
	str r0, [sp, #76]
	ldrb r0, [r0]
	ldr r7, [sp, #104]
	orr r7, r7, r0
	str r7, [sp, #104]
	add r6, r6, #240
	add r0, r5, r6
	add r0, r4, r0
	str r0, [sp, #80]
	ldrb r0, [r0]
	lsl r6, r0, #24
	ldr r7, _080CA0A8  @ =0x00000FC2
	add r0, r7, r5
	add r0, r4, r0
	str r0, [sp, #84]
	ldrb r7, [r0]
	add r0, r7, #0
	lsl r0, r0, #16
	orr r6, r6, r0
	ldr r7, _080CA0AC  @ =0x000013B2
	add r0, r7, r5
	add r0, r0, r4
	mov r10, r0
	ldrb r7, [r0]
	add r0, r7, #0
	lsl r0, r0, #8
	orr r6, r6, r0
	ldr r7, _080CA0B0  @ =0x00001172
	add r7, r7, r5
	mov r9, r7
	add r9, r9, r4
	mov r0, r9
	ldrb r0, [r0]
	orr r6, r6, r0
	ldr r7, _080CA0B4  @ =0x0000144C
	add r0, r7, r5
	add r0, r4, r0
	str r0, [sp, #88]
	ldrb r7, [r0]
	ldr r0, [sp]
	strb r7, [r0]
	ldr r0, _080CA0B8  @ =0x0000145C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #4]
	strb r7, [r0]
	ldr r0, _080CA0BC  @ =0x0000146C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #8]
	strb r7, [r0]
	ldr r0, _080CA0C0  @ =0x0000147C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #12]
	strb r7, [r0]
	ldr r0, _080CA0C4  @ =0x0000148C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #16]
	strb r7, [r0]
	ldr r0, _080CA0C8  @ =0x0000149C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #20]
	strb r7, [r0]
	ldr r0, _080CA0CC  @ =0x000014AC
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #24]
	strb r7, [r0]
	ldr r0, _080CA0D0  @ =0x000014BC
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #28]
	strb r7, [r0]
	ldr r0, _080CA0D4  @ =0x000014CC
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #32]
	strb r7, [r0]
	ldr r0, _080CA0D8  @ =0x000014DC
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #36]
	strb r7, [r0]
	ldr r0, _080CA0DC  @ =0x000014EC
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #40]
	strb r7, [r0]
	ldr r0, _080CA0E0  @ =0x000014FC
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #44]
	strb r7, [r0]
	ldr r0, _080CA0E4  @ =0x0000150C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #48]
	strb r7, [r0]
	ldr r0, _080CA0E8  @ =0x0000151C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #52]
	strb r7, [r0]
	ldr r0, _080CA0EC  @ =0x0000152C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #56]
	strb r7, [r0]
	ldr r0, _080CA0F0  @ =0x0000153C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #60]
	strb r7, [r0]
	ldr r0, _080CA0F4  @ =0x0000154C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #64]
	strb r7, [r0]
	ldr r0, _080CA0F8  @ =0x0000155C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #68]
	strb r7, [r0]
	ldr r0, _080CA0FC  @ =0x0000156C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #72]
	strb r7, [r0]
	ldr r0, _080CA100  @ =0x0000157C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #76]
	strb r7, [r0]
	ldr r0, _080CA104  @ =0x0000158C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #80]
	strb r7, [r0]
	ldr r0, _080CA108  @ =0x0000159C
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	ldr r0, [sp, #84]
	strb r7, [r0]
	ldr r0, _080CA10C  @ =0x000015BC
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	mov r0, r10
	strb r7, [r0]
	ldr r0, _080CA110  @ =0x000015CC
	add r0, r0, r5
	mov r12, r0
	add r12, r12, r4
	mov r7, r12
	ldrb r7, [r7]
	mov r12, r7
	mov r0, r9
	strb r7, [r0]
	add r0, r4, #0
	str r1, [sp, #92]
	str r2, [sp, #96]
	str r3, [sp, #100]
	bl Sprite_ExecuteSingleLong
	ldr r0, _080CA114  @ =0x000010D2
	add r5, r5, r0
	add r4, r4, r5
	ldrb r0, [r4]
	ldr r1, [sp, #92]
	ldr r2, [sp, #96]
	ldr r3, [sp, #100]
	cmp r0, #0
	beq _080C9FDE
	mov r0, #0
	ldr r4, [sp, #88]
	strb r0, [r4]
_080C9FDE:
	mov r7, r8
	lsr r0, r7, #24
	ldr r4, [sp]
	strb r0, [r4]
	lsr r0, r7, #16
	ldr r7, [sp, #4]
	strb r0, [r7]
	mov r4, r8
	lsr r0, r4, #8
	ldr r7, [sp, #8]
	strb r0, [r7]
	ldr r0, [sp, #12]
	strb r4, [r0]
	lsr r0, r3, #24
	ldr r4, [sp, #16]
	strb r0, [r4]
	lsr r0, r3, #16
	ldr r7, [sp, #20]
	strb r0, [r7]
	lsr r0, r3, #8
	ldr r4, [sp, #24]
	strb r0, [r4]
	ldr r7, [sp, #28]
	strb r3, [r7]
	lsr r0, r2, #24
	ldr r3, [sp, #32]
	strb r0, [r3]
	lsr r0, r2, #16
	ldr r4, [sp, #36]
	strb r0, [r4]
	lsr r0, r2, #8
	ldr r7, [sp, #40]
	strb r0, [r7]
	ldr r0, [sp, #44]
	strb r2, [r0]
	lsr r0, r1, #24
	ldr r2, [sp, #48]
	strb r0, [r2]
	lsr r0, r1, #16
	ldr r3, [sp, #52]
	strb r0, [r3]
	lsr r0, r1, #8
	ldr r4, [sp, #56]
	strb r0, [r4]
	ldr r7, [sp, #60]
	strb r1, [r7]
	ldr r1, [sp, #104]
	lsr r0, r1, #24
	ldr r2, [sp, #64]
	strb r0, [r2]
	lsr r0, r1, #16
	ldr r3, [sp, #68]
	strb r0, [r3]
	lsr r0, r1, #8
	ldr r4, [sp, #72]
	strb r0, [r4]
	ldr r7, [sp, #76]
	strb r1, [r7]
	lsr r0, r6, #24
	ldr r1, [sp, #80]
	strb r0, [r1]
	lsr r0, r6, #16
	ldr r2, [sp, #84]
	strb r0, [r2]
	lsr r0, r6, #8
	mov r3, r10
	strb r0, [r3]
	mov r4, r9
	strb r6, [r4]
	add sp, sp, #108
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080CA078:
	.4byte gRam
_080CA07C:
	.4byte 0x00000FA2
_080CA080:
	.4byte 0x00000FF2
_080CA084:
	.4byte 0x00000EE2
_080CA088:
	.4byte 0x00000F02
_080CA08C:
	.4byte 0x00000EF2
_080CA090:
	.4byte 0x00001082
_080CA094:
	.4byte 0x00001122
_080CA098:
	.4byte 0x00000D94
_080CA09C:
	.4byte 0x00001012
_080CA0A0:
	.4byte 0x000010F2
_080CA0A4:
	.4byte 0x00001052
_080CA0A8:
	.4byte 0x00000FC2
_080CA0AC:
	.4byte 0x000013B2
_080CA0B0:
	.4byte 0x00001172
_080CA0B4:
	.4byte 0x0000144C
_080CA0B8:
	.4byte 0x0000145C
_080CA0BC:
	.4byte 0x0000146C
_080CA0C0:
	.4byte 0x0000147C
_080CA0C4:
	.4byte 0x0000148C
_080CA0C8:
	.4byte 0x0000149C
_080CA0CC:
	.4byte 0x000014AC
_080CA0D0:
	.4byte 0x000014BC
_080CA0D4:
	.4byte 0x000014CC
_080CA0D8:
	.4byte 0x000014DC
_080CA0DC:
	.4byte 0x000014EC
_080CA0E0:
	.4byte 0x000014FC
_080CA0E4:
	.4byte 0x0000150C
_080CA0E8:
	.4byte 0x0000151C
_080CA0EC:
	.4byte 0x0000152C
_080CA0F0:
	.4byte 0x0000153C
_080CA0F4:
	.4byte 0x0000154C
_080CA0F8:
	.4byte 0x0000155C
_080CA0FC:
	.4byte 0x0000156C
_080CA100:
	.4byte 0x0000157C
_080CA104:
	.4byte 0x0000158C
_080CA108:
	.4byte 0x0000159C
_080CA10C:
	.4byte 0x000015BC
_080CA110:
	.4byte 0x000015CC
_080CA114:
	.4byte 0x000010D2
	THUMB_FUNC_END sub_080C9CAC

