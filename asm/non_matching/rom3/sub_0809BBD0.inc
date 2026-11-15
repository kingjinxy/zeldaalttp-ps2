	THUMB_FUNC_START sub_0809BBD0
sub_0809BBD0: @ 0x0809BBD0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _0809BC5C  @ =gRam
	ldr r1, _0809BC60  @ =0x00001805
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _0809BC64  @ =0x00001702
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _0809BC68  @ =0x000016F8
	add r0, r2, r4
	strb r1, [r0]
	mov r6, #4
	add r5, r2, #0
	add r3, r5, #0
	ldr r7, _0809BC6C  @ =0x00000E15
	add r1, r5, r7
_0809BBFA:
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #31
	beq _0809BC90
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	bge _0809BBFA
	ldr r0, _0809BC70  @ =0x000016EB
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	mov r4, #0
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0809BC20
	b _0809C1AC
_0809BC20:
	ldr r1, _0809BC74  @ =0x00001789
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _0809BC78  @ =0x0000180D
	add r0, r3, r2
	strb r4, [r0]
	ldr r6, _0809BC7C  @ =0x000016E8
	add r2, r3, r6
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r7, _0809BC80  @ =0x00001705
	add r2, r3, r7
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _0809BC84  @ =0x0000180C
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #251
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0809BC88  @ =0x00001718
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _0809BC8C  @ =0x000016EA
	add r1, r3, r2
	b _0809C068
_0809BC5C:
	.4byte gRam
_0809BC60:
	.4byte 0x00001805
_0809BC64:
	.4byte 0x00001702
_0809BC68:
	.4byte 0x000016F8
_0809BC6C:
	.4byte 0x00000E15
_0809BC70:
	.4byte 0x000016EB
_0809BC74:
	.4byte 0x00001789
_0809BC78:
	.4byte 0x0000180D
_0809BC7C:
	.4byte 0x000016E8
_0809BC80:
	.4byte 0x00001705
_0809BC84:
	.4byte 0x0000180C
_0809BC88:
	.4byte 0x00001718
_0809BC8C:
	.4byte 0x000016EA
_0809BC90:
	ldr r4, _0809BCDC  @ =0x000016EB
	add r1, r3, r4
	ldrb r0, [r1]
	sub r0, r0, #1
	mov r2, #0
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809BCA4
	strb r2, [r1]
_0809BCA4:
	ldr r6, _0809BCE0  @ =0x00001810
	add r6, r6, r5
	mov r9, r6
	ldrb r0, [r6]
	cmp r0, #0
	bne _0809BCF4
	mov r7, #182
	lsl r7, r7, #5
	add r0, r5, r7
	ldrb r1, [r0]
	ldr r3, _0809BCE4  @ =0x000016EC
	add r0, r5, r3
	strb r1, [r0]
	ldr r4, _0809BCE8  @ =0x000016C4
	add r0, r5, r4
	ldrb r1, [r0]
	ldr r6, _0809BCEC  @ =0x000016F0
	add r0, r5, r6
	strb r1, [r0]
	add r7, r7, #22
	add r0, r5, r7
	strb r2, [r0]
	ldr r1, _0809BCF0  @ =0x000016D7
	add r0, r5, r1
	strb r2, [r0]
	bl sub_0809407C
	b _0809C1AC
_0809BCDC:
	.4byte 0x000016EB
_0809BCE0:
	.4byte 0x00001810
_0809BCE4:
	.4byte 0x000016EC
_0809BCE8:
	.4byte 0x000016C4
_0809BCEC:
	.4byte 0x000016F0
_0809BCF0:
	.4byte 0x000016D7
_0809BCF4:
	ldr r3, _0809BD18  @ =0x00001783
	add r0, r5, r3
	strb r2, [r0]
	ldr r4, _0809BD1C  @ =0x00001831
	add r0, r5, r4
	ldrb r6, [r0]
	ldr r7, _0809BD20  @ =0x00000E29
	add r0, r5, r7
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809BD24
	strb r2, [r1]
	b _0809BE14
	.byte 0x00
	.byte 0x00
_0809BD18:
	.4byte 0x00001783
_0809BD1C:
	.4byte 0x00001831
_0809BD20:
	.4byte 0x00000E29
_0809BD24:
	ldr r1, _0809BEA8  @ =0x00000DC5
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r4, r5, r2
	strb r0, [r4]
	ldr r3, _0809BEAC  @ =0x00000DD9
	add r0, r5, r3
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r7, _0809BEB0  @ =0x00000961
	add r0, r5, r7
	strb r1, [r0]
	ldr r1, _0809BEB4  @ =0x00000DCF
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	add r2, r2, #4
	add r2, r2, r5
	mov r10, r2
	strb r0, [r2]
	add r3, r3, #10
	add r0, r5, r3
	add r0, r6, r0
	ldrb r1, [r0]
	add r7, r7, #4
	add r0, r5, r7
	strb r1, [r0]
	ldr r1, _0809BEB8  @ =0x00000E3D
	add r0, r5, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r0, _0809BEBC  @ =gUnknown_08167FD4
	add r0, r1, r0
	ldrb r3, [r0]
	ldr r2, _0809BEC0  @ =0x00000968
	add r0, r5, r2
	mov r2, #0
	strh r3, [r0]
	ldr r0, _0809BEC4  @ =gUnknown_08167FD8
	add r0, r1, r0
	ldrb r0, [r0]
	ldr r6, _0809BEC8  @ =0x0000096C
	add r6, r6, r5
	mov r12, r6
	strh r0, [r6]
	ldr r7, _0809BECC  @ =gUnknown_030038FD
	strb r2, [r7]
	ldr r0, _0809BED0  @ =0x000016CE
	add r6, r5, r0
	strb r2, [r6]
	ldr r0, _0809BED4  @ =gUnknown_08167FDC
	add r0, r1, r0
	ldrb r0, [r0]
	mov r7, #151
	lsl r7, r7, #4
	add r2, r5, r7
	strh r0, [r2]
	ldr r0, _0809BED8  @ =gUnknown_08167FE0
	add r1, r1, r0
	ldrb r0, [r1]
	ldr r1, _0809BEDC  @ =0x00000974
	add r1, r1, r5
	mov r8, r1
	strh r0, [r1]
	ldrh r0, [r4]
	add r0, r0, r3
	mov r3, #182
	lsl r3, r3, #5
	add r1, r5, r3
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _0809BDC8
	neg r0, r0
	lsl r0, r0, #16
	lsr r1, r0, #16
_0809BDC8:
	lsl r0, r1, #16
	asr r0, r0, #16
	cmp r0, #1
	ble _0809BDD6
	ldrb r0, [r2]
	ldr r4, _0809BECC  @ =gUnknown_030038FD
	strb r0, [r4]
_0809BDD6:
	mov r7, r12
	ldrh r0, [r7]
	mov r1, r10
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _0809BEE0  @ =0x000016C4
	add r1, r5, r2
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _0809BDF8
	neg r0, r0
	lsl r0, r0, #16
	lsr r1, r0, #16
_0809BDF8:
	lsl r0, r1, #16
	asr r0, r0, #16
	cmp r0, #1
	ble _0809BE06
	mov r3, r8
	ldrb r0, [r3]
	strb r0, [r6]
_0809BE06:
	ldr r4, _0809BECC  @ =gUnknown_030038FD
	ldrb r1, [r4]
	ldrb r0, [r6]
	orr r0, r0, r1
	cmp r0, #0
	beq _0809BE14
	b _0809C090
_0809BE14:
	ldr r4, _0809BEE4  @ =gRam
	ldr r6, _0809BEE8  @ =0x00001831
	add r0, r4, r6
	ldrb r6, [r0]
	ldr r7, _0809BEEC  @ =0x00000E15
	add r0, r4, r7
	add r0, r6, r0
	mov r3, #0
	strb r3, [r0]
	ldr r1, _0809BEF0  @ =0x00001718
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _0809BEF4  @ =0x00001789
	add r0, r4, r2
	strb r3, [r0]
	ldr r7, _0809BEF8  @ =0x000016EB
	add r0, r4, r7
	strb r3, [r0]
	add r1, r1, #248
	add r0, r4, r1
	strb r3, [r0]
	sub r7, r7, #3
	add r2, r4, r7
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _0809BEFC  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0809BF00  @ =0x0000180C
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #251
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _0809BF04  @ =0x0000180D
	add r0, r4, r2
	strb r3, [r0]
	ldr r3, _0809BF08  @ =0x00001837
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809BF38
	ldr r6, _0809BF0C  @ =0x00000B1E
	add r2, r4, r6
	ldrh r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strh r0, [r2]
	ldr r7, _0809BF10  @ =0x000009DE
	add r1, r4, r7
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	mov r1, #175
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0809BF1C
	ldr r2, _0809BF14  @ =0x000009DA
	add r0, r4, r2
	ldrh r1, [r0]
	ldr r3, _0809BF18  @ =0x00000B36
	add r2, r4, r3
	strh r1, [r2]
	add r1, r1, #16
	strh r1, [r0]
	b _0809BF38
_0809BEA8:
	.4byte 0x00000DC5
_0809BEAC:
	.4byte 0x00000DD9
_0809BEB0:
	.4byte 0x00000961
_0809BEB4:
	.4byte 0x00000DCF
_0809BEB8:
	.4byte 0x00000E3D
_0809BEBC:
	.4byte gUnknown_08167FD4
_0809BEC0:
	.4byte 0x00000968
_0809BEC4:
	.4byte gUnknown_08167FD8
_0809BEC8:
	.4byte 0x0000096C
_0809BECC:
	.4byte gUnknown_030038FD
_0809BED0:
	.4byte 0x000016CE
_0809BED4:
	.4byte gUnknown_08167FDC
_0809BED8:
	.4byte gUnknown_08167FE0
_0809BEDC:
	.4byte 0x00000974
_0809BEE0:
	.4byte 0x000016C4
_0809BEE4:
	.4byte gRam
_0809BEE8:
	.4byte 0x00001831
_0809BEEC:
	.4byte 0x00000E15
_0809BEF0:
	.4byte 0x00001718
_0809BEF4:
	.4byte 0x00001789
_0809BEF8:
	.4byte 0x000016EB
_0809BEFC:
	.4byte 0x00001705
_0809BF00:
	.4byte 0x0000180C
_0809BF04:
	.4byte 0x0000180D
_0809BF08:
	.4byte 0x00001837
_0809BF0C:
	.4byte 0x00000B1E
_0809BF10:
	.4byte 0x000009DE
_0809BF14:
	.4byte 0x000009DA
_0809BF18:
	.4byte 0x00000B36
_0809BF1C:
	cmp r0, #2
	bne _0809BF26
	bl sub_08070064
	b _0809BF38
_0809BF26:
	mov r6, #161
	lsl r6, r6, #4
	add r0, r4, r6
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
	bl sub_08070064
_0809BF38:
	bl sub_0809EDA4
	ldr r5, _0809BFD8  @ =gRam
	ldr r7, _0809BFDC  @ =0x000017D0
	add r0, r5, r7
	ldrh r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _0809C000
	ldr r1, _0809BFE0  @ =0x000017D4
	add r0, r5, r1
	ldrb r4, [r0]
	cmp r4, #0
	bne _0809C000
	mov r6, #1
	strb r6, [r0]
	ldr r2, _0809BFE4  @ =0x000016CC
	add r0, r5, r2
	ldrb r1, [r0]
	ldr r3, _0809BFE8  @ =0x000017CE
	add r0, r5, r3
	strb r1, [r0]
	sub r7, r7, #128
	add r0, r5, r7
	strb r4, [r0]
	ldr r1, _0809BFEC  @ =0x000017DF
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #234
	add r0, r5, r2
	strb r4, [r0]
	bl sub_08092B0C
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	ldr r3, _0809BFF0  @ =0x00001718
	add r1, r5, r3
	mov r0, #4
	strb r0, [r1]
	add r7, r7, #30
	add r1, r5, r7
	mov r0, #32
	strb r0, [r1]
	ldr r1, _0809BFF4  @ =0x0000180D
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _0809BFF8  @ =0x00001710
	add r0, r5, r2
	strb r4, [r0]
	add r3, r3, #217
	add r0, r5, r3
	strb r4, [r0]
	add r7, r7, #35
	add r0, r5, r7
	strb r4, [r0]
	sub r1, r1, #123
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #248
	add r0, r5, r2
	strb r4, [r0]
	sub r3, r3, #216
	add r0, r5, r3
	strb r4, [r0]
	ldr r4, _0809BFFC  @ =0x000009B2
	add r0, r5, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809C062
	mov r7, #161
	lsl r7, r7, #4
	add r0, r5, r7
	strb r6, [r0]
	b _0809C062
	.byte 0x00
	.byte 0x00
_0809BFD8:
	.4byte gRam
_0809BFDC:
	.4byte 0x000017D0
_0809BFE0:
	.4byte 0x000017D4
_0809BFE4:
	.4byte 0x000016CC
_0809BFE8:
	.4byte 0x000017CE
_0809BFEC:
	.4byte 0x000017DF
_0809BFF0:
	.4byte 0x00001718
_0809BFF4:
	.4byte 0x0000180D
_0809BFF8:
	.4byte 0x00001710
_0809BFFC:
	.4byte 0x000009B2
_0809C000:
	ldr r3, _0809C030  @ =gRam
	ldr r1, _0809C034  @ =0x00001714
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _0809C044
	mov r2, #182
	lsl r2, r2, #5
	add r0, r3, r2
	ldrh r1, [r0]
	ldr r4, _0809C038  @ =0x000016EC
	add r0, r3, r4
	strh r1, [r0]
	ldr r6, _0809C03C  @ =0x000016C4
	add r0, r3, r6
	ldrh r1, [r0]
	ldr r7, _0809C040  @ =0x000016F0
	add r0, r3, r7
	strh r1, [r0]
	bl sub_0809407C
	b _0809C17A
_0809C030:
	.4byte gRam
_0809C034:
	.4byte 0x00001714
_0809C038:
	.4byte 0x000016EC
_0809C03C:
	.4byte 0x000016C4
_0809C040:
	.4byte 0x000016F0
_0809C044:
	ldr r0, _0809C078  @ =0x00001717
	add r1, r3, r0
	mov r2, #0
	mov r0, #9
	strb r0, [r1]
	ldr r1, _0809C07C  @ =0x00001715
	add r0, r3, r1
	strb r2, [r0]
	ldr r2, _0809C080  @ =0x00001716
	add r0, r3, r2
	mov r1, #1
	strb r1, [r0]
	ldr r4, _0809C084  @ =0x00001718
	add r0, r3, r4
	strb r1, [r0]
_0809C062:
	ldr r0, _0809C088  @ =gRam
	ldr r6, _0809C08C  @ =0x000016EA
	add r1, r0, r6
_0809C068:
	ldrb r0, [r1]
	cmp r0, #8
	bhi _0809C070
	b _0809C1AC
_0809C070:
	mov r0, #9
	strb r0, [r1]
	b _0809C1AC
	.byte 0x00
	.byte 0x00
_0809C078:
	.4byte 0x00001717
_0809C07C:
	.4byte 0x00001715
_0809C080:
	.4byte 0x00001716
_0809C084:
	.4byte 0x00001718
_0809C088:
	.4byte gRam
_0809C08C:
	.4byte 0x000016EA
_0809C090:
	bl sub_080978AC
	mov r0, #5
	bl sub_0809EEB4
	ldr r7, _0809C124  @ =0x000009B2
	add r0, r5, r7
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809C0E2
	ldr r1, _0809C128  @ =0x000017FF
	add r0, r5, r1
	ldrb r1, [r0]
	lsr r0, r1, #4
	orr r0, r0, r1
	mov r2, #192
	lsl r2, r2, #5
	add r1, r5, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0809C0E2
	ldr r3, _0809C12C  @ =0x00001890
	add r1, r5, r3
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809C0E2
	mov r0, #3
	strb r0, [r1]
	mov r4, r9
	ldrb r0, [r4]
	mov r1, #2
	eor r0, r0, r1
	strb r0, [r4]
_0809C0E2:
	ldr r2, _0809C130  @ =gRam
	ldr r6, _0809C134  @ =0x000017E1
	add r3, r2, r6
	mov r0, #0
	strb r0, [r3]
	ldr r7, _0809C138  @ =0x00001810
	add r0, r2, r7
	ldrb r1, [r0]
	mov r4, #2
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809C17A
	ldr r1, _0809C13C  @ =0x000017E8
	add r0, r2, r1
	ldrh r1, [r0]
	mov r5, #1
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0809C140
	strb r4, [r3]
	bl sub_0809DC3C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _0809C17A
	mov r0, #60
	bl sub_0809E43C
	b _0809C17A
	.byte 0x00
	.byte 0x00
_0809C124:
	.4byte 0x000009B2
_0809C128:
	.4byte 0x000017FF
_0809C12C:
	.4byte 0x00001890
_0809C130:
	.4byte gRam
_0809C134:
	.4byte 0x000017E1
_0809C138:
	.4byte 0x00001810
_0809C13C:
	.4byte 0x000017E8
_0809C140:
	ldr r4, _0809C168  @ =0x000017EA
	add r0, r2, r4
	ldr r6, _0809C16C  @ =0x000017D0
	add r1, r2, r6
	ldrh r0, [r0]
	ldrh r1, [r1]
	orr r0, r0, r1
	and r0, r0, r5
	cmp r0, #0
	beq _0809C17A
	strb r5, [r3]
	ldr r7, _0809C170  @ =0x000009C6
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #112
	bne _0809C174
	mov r0, #61
	bl sub_0809E43C
	b _0809C17A
_0809C168:
	.4byte 0x000017EA
_0809C16C:
	.4byte 0x000017D0
_0809C170:
	.4byte 0x000009C6
_0809C174:
	mov r0, #62
	bl sub_0809E43C
_0809C17A:
	ldr r1, _0809C19C  @ =gRam
	ldr r2, _0809C1A0  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0809C1AC
	ldr r3, _0809C1A4  @ =0x0000172C
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809C1A8
	bl sub_0809B0DC
	b _0809C1AC
	.byte 0x00
	.byte 0x00
_0809C19C:
	.4byte gRam
_0809C1A0:
	.4byte 0x000009B2
_0809C1A4:
	.4byte 0x0000172C
_0809C1A8:
	bl sub_0809B2AC
_0809C1AC:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809BBD0

	.byte 0x00
	.byte 0x00
