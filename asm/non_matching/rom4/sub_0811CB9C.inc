	THUMB_FUNC_START sub_0811CB9C
sub_0811CB9C: @ 0x0811CB9C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r10, r5
	ldr r6, _0811CC18  @ =gRam
	ldr r1, _0811CC1C  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811CBBC
	b _0811CF20
_0811CBBC:
	ldr r2, _0811CC20  @ =0x00000E33
	add r0, r6, r2
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0811CBD4
	mov r0, #7
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #40
	bl sub_080C19F8
_0811CBD4:
	ldr r3, _0811CC24  @ =0x00001810
	add r0, r6, r3
	ldrb r7, [r0]
	cmp r7, #0
	beq _0811CBE0
	b _0811CF20
_0811CBE0:
	add r0, r5, #0
	bl sub_080BF774
	add r0, r5, #0
	bl sub_080C1768
	ldr r4, _0811CC28  @ =0x00000E1F
	add r0, r6, r4
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _0811CC34
	ldr r0, _0811CC2C  @ =0x00000E29
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _0811CC0C
	b _0811CF20
_0811CC0C:
	ldr r1, _0811CC30  @ =0x00000E15
	add r0, r6, r1
	add r0, r5, r0
	strb r7, [r0]
	b _0811D186
	.byte 0x00
	.byte 0x00
_0811CC18:
	.4byte gRam
_0811CC1C:
	.4byte 0x000009AD
_0811CC20:
	.4byte 0x00000E33
_0811CC24:
	.4byte 0x00001810
_0811CC28:
	.4byte 0x00000E1F
_0811CC2C:
	.4byte 0x00000E29
_0811CC30:
	.4byte 0x00000E15
_0811CC34:
	ldr r2, _0811CD08  @ =0x00000E29
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0811CC64
	mov r0, #1
	strb r0, [r4]
	ldr r3, _0811CD0C  @ =0x00000DED
	add r1, r6, r3
	add r1, r5, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _0811CD10  @ =0x00000DF7
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_0811CC64:
	add r0, r5, #0
	bl sub_0811C978
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0811CC74
	b _0811CF20
_0811CC74:
	ldr r1, _0811CD14  @ =0x00001818
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0811CCB6
	ldrb r0, [r4]
	cmp r0, #0
	bne _0811CCB6
	add r0, r5, #0
	mov r1, #0
	bl sub_080C09FC
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811CCB6
	ldrb r0, [r4]
	cmp r0, #0
	bne _0811CCB6
	mov r0, #1
	strb r0, [r4]
	ldr r2, _0811CD0C  @ =0x00000DED
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	ldr r3, _0811CD10  @ =0x00000DF7
	add r1, r6, r3
	add r1, r5, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
_0811CCB6:
	add r0, r5, #0
	bl sub_0809F9A8
	ldr r2, _0811CD18  @ =gRam
	mov r6, #150
	lsl r6, r6, #4
	add r4, r2, r6
	mov r0, #0
	strb r0, [r4]
	ldr r1, _0811CD1C  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0811CD28
	mov r3, #1
	ldr r6, _0811CD20  @ =0x00000E3D
	add r0, r2, r6
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _0811CCF4
	ldr r1, _0811CD24  @ =0x000017FF
	add r0, r2, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	strb r0, [r4]
	mov r3, #0
_0811CCF4:
	ldr r6, _0811CD24  @ =0x000017FF
	add r0, r2, r6
	add r0, r3, r0
	ldrb r0, [r0]
	ldrb r1, [r4]
	orr r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r4]
	b _0811CD48
_0811CD08:
	.4byte 0x00000E29
_0811CD0C:
	.4byte 0x00000DED
_0811CD10:
	.4byte 0x00000DF7
_0811CD14:
	.4byte 0x00001818
_0811CD18:
	.4byte gRam
_0811CD1C:
	.4byte 0x000009B2
_0811CD20:
	.4byte 0x00000E3D
_0811CD24:
	.4byte 0x000017FF
_0811CD28:
	mov r1, #192
	lsl r1, r1, #5
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	ldr r3, _0811CDA8  @ =0x000017FF
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r4, _0811CDAC  @ =0x00001802
	add r1, r2, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #51
	and r0, r0, r1
_0811CD48:
	cmp r0, #0
	beq _0811CDEA
	ldr r1, _0811CDB0  @ =gRam
	ldr r6, _0811CDB4  @ =0x00001827
	add r0, r1, r6
	add r3, r5, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811CDEA
	ldr r2, _0811CDB8  @ =0x00001813
	add r0, r1, r2
	add r0, r5, r0
	ldrb r2, [r0]
	cmp r2, #0
	beq _0811CDC4
	mov r4, #150
	lsl r4, r4, #4
	add r0, r1, r4
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0811CD88
	ldr r6, _0811CDB0  @ =gRam
	ldr r1, _0811CDBC  @ =0x00001736
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r2, r0
	beq _0811CDC4
_0811CD88:
	mov r0, #2
	strb r0, [r3]
	ldr r2, _0811CDB0  @ =gRam
	ldr r3, _0811CDC0  @ =0x00001818
	add r0, r2, r3
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811CDEA
	mov r0, #0
	strb r0, [r1]
	b _0811CDEA
	.byte 0x00
	.byte 0x00
_0811CDA8:
	.4byte 0x000017FF
_0811CDAC:
	.4byte 0x00001802
_0811CDB0:
	.4byte gRam
_0811CDB4:
	.4byte 0x00001827
_0811CDB8:
	.4byte 0x00001813
_0811CDBC:
	.4byte 0x00001736
_0811CDC0:
	.4byte 0x00001818
_0811CDC4:
	ldr r4, _0811CE10  @ =gRam
	ldr r6, _0811CE14  @ =0x00001818
	add r1, r4, r6
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0811CE18  @ =0x00001813
	add r0, r4, r1
	add r0, r5, r0
	ldr r2, _0811CE1C  @ =0x00001736
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _0811CE20  @ =0x00001827
	add r0, r4, r3
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
_0811CDEA:
	ldr r4, _0811CE10  @ =gRam
	ldr r6, _0811CE14  @ =0x00001818
	add r0, r4, r6
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811CDFA
	b _0811CF20
_0811CDFA:
	ldr r1, _0811CE20  @ =0x00001827
	add r0, r4, r1
	add r1, r5, r0
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	blt _0811CE24
	sub r0, r2, #1
	strb r0, [r1]
	b _0811CF20
_0811CE10:
	.4byte gRam
_0811CE14:
	.4byte 0x00001818
_0811CE18:
	.4byte 0x00001813
_0811CE1C:
	.4byte 0x00001736
_0811CE20:
	.4byte 0x00001827
_0811CE24:
	ldr r2, _0811CEAC  @ =gRam
	ldr r3, _0811CEB0  @ =0x0000097C
	add r0, r2, r3
	ldrb r1, [r0]
	lsl r0, r1, #24
	asr r0, r0, #28
	orr r0, r0, r1
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r4, _0811CEB4  @ =0x00001713
	add r1, r2, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r6, _0811CEB8  @ =0x00000978
	add r1, r2, r6
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	orr r0, r0, r1
	mov r2, #3
	and r0, r0, r2
	cmp r0, #0
	beq _0811CED4
	ldr r1, _0811CEAC  @ =gRam
	ldr r3, _0811CEBC  @ =0x00000E1F
	add r0, r1, r3
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0811CED4
	mov r0, #1
	strb r0, [r1]
	ldr r4, _0811CEAC  @ =gRam
	ldr r6, _0811CEC0  @ =0x00000DED
	add r1, r4, r6
	add r1, r5, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _0811CEC4  @ =0x00000DF7
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	ldr r1, _0811CEC8  @ =0x00001784
	add r4, r4, r1
	ldrh r1, [r4]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0811CEE4
	mov r0, #1
	mov r1, #6
	add r2, r5, #0
	bl sub_080AC1E0
	ldrh r1, [r4]
	mov r0, #48
	and r0, r0, r1
	cmp r0, #0
	beq _0811CECC
	add r0, r5, #0
	mov r1, #9
	bl sub_080C19F8
	b _0811CED4
	.byte 0x00
	.byte 0x00
_0811CEAC:
	.4byte gRam
_0811CEB0:
	.4byte 0x0000097C
_0811CEB4:
	.4byte 0x00001713
_0811CEB8:
	.4byte 0x00000978
_0811CEBC:
	.4byte 0x00000E1F
_0811CEC0:
	.4byte 0x00000DED
_0811CEC4:
	.4byte 0x00000DF7
_0811CEC8:
	.4byte 0x00001784
_0811CECC:
	add r0, r5, #0
	mov r1, #113
	bl sub_080C19F8
_0811CED4:
	ldr r2, _0811CF00  @ =gRam
	ldr r3, _0811CF04  @ =0x00001784
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _0811CF20
_0811CEE4:
	ldr r4, _0811CF00  @ =gRam
	ldr r6, _0811CF08  @ =0x00000E29
	add r0, r4, r6
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #3
	bhi _0811CF10
	ldr r1, _0811CF0C  @ =0x00000E15
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	b _0811D186
	.byte 0x00
	.byte 0x00
_0811CF00:
	.4byte gRam
_0811CF04:
	.4byte 0x00001784
_0811CF08:
	.4byte 0x00000E29
_0811CF0C:
	.4byte 0x00000E15
_0811CF10:
	ldr r2, _0811D000  @ =gRam
	ldr r3, _0811D004  @ =0x00001810
	add r0, r2, r3
	mov r1, #1
	strb r1, [r0]
	ldr r4, _0811D008  @ =0x00001831
	add r0, r2, r4
	strb r5, [r0]
_0811CF20:
	add r0, r5, #0
	bl sub_080C177C
	ldr r3, _0811D000  @ =gRam
	ldr r6, _0811D00C  @ =0x00001818
	add r0, r3, r6
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811CF3C
	ldr r0, _0811D010  @ =0x00001724
	add r1, r3, r0
	mov r0, #48
	strb r0, [r1]
_0811CF3C:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r1, [r0]
	ldr r2, _0811D014  @ =0x00000968
	add r0, r3, r2
	strh r1, [r0]
	ldr r4, _0811D018  @ =0x00000964
	add r0, r3, r4
	ldrh r1, [r0]
	ldr r6, _0811D01C  @ =0x0000096C
	add r0, r3, r6
	strh r1, [r0]
	ldr r1, _0811D020  @ =0x00000E3D
	add r0, r3, r1
	add r0, r5, r0
	ldrb r0, [r0]
	add r4, r4, #12
	add r2, r3, r4
	lsl r1, r0, #1
	add r0, r0, r1
	ldr r5, _0811D024  @ =0x00000974
	add r1, r3, r5
	strb r0, [r1]
	mov r0, #2
_0811CF6E:
	strb r0, [r2]
_0811CF70:
	ldr r7, _0811D000  @ =gRam
	ldr r6, _0811D024  @ =0x00000974
	add r6, r6, r7
	mov r9, r6
	ldrb r5, [r6]
	ldr r0, _0811D028  @ =gUnknown_0817F914
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r0, #255
	beq _0811CFC0
	ldr r0, _0811D02C  @ =gUnknown_03003E74
	mov r8, r0
	ldrh r0, [r0]
	ldr r2, _0811D018  @ =0x00000964
	add r1, r7, r2
	ldrh r1, [r1]
	mov r4, #150
	lsl r4, r4, #4
	add r2, r7, r4
	ldrh r2, [r2]
	ldrb r3, [r3]
	ldr r6, _0811D030  @ =gUnknown_0817F920
	add r6, r5, r6
	ldr r5, _0811D010  @ =0x00001724
	add r4, r7, r5
	ldrb r4, [r4]
	mov r5, #2
	orr r4, r4, r5
	ldrb r5, [r6]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	mov r6, r8
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
_0811CFC0:
	mov r1, r9
	ldrb r0, [r1]
	add r0, r0, #1
	mov r3, #0
	strb r0, [r1]
	ldr r4, _0811D018  @ =0x00000964
	add r2, r7, r4
	ldrb r0, [r2]
	add r0, r0, #8
	strb r0, [r2]
	mov r5, #151
	lsl r5, r5, #4
	add r1, r7, r5
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _0811D034
	cmp r0, #0
	bne _0811CF70
	mov r6, #150
	lsl r6, r6, #4
	add r1, r7, r6
	ldrb r0, [r1]
	add r0, r0, #8
	strb r0, [r1]
	ldr r1, _0811D01C  @ =0x0000096C
	add r0, r7, r1
	ldrb r0, [r0]
	b _0811CF6E
_0811D000:
	.4byte gRam
_0811D004:
	.4byte 0x00001810
_0811D008:
	.4byte 0x00001831
_0811D00C:
	.4byte 0x00001818
_0811D010:
	.4byte 0x00001724
_0811D014:
	.4byte 0x00000968
_0811D018:
	.4byte 0x00000964
_0811D01C:
	.4byte 0x0000096C
_0811D020:
	.4byte 0x00000E3D
_0811D024:
	.4byte 0x00000974
_0811D028:
	.4byte gUnknown_0817F914
_0811D02C:
	.4byte gUnknown_03003E74
_0811D030:
	.4byte gUnknown_0817F920
_0811D034:
	mov r5, r10
	mov r2, r9
	strh r3, [r2]
	ldr r4, _0811D198  @ =0x00000978
	add r2, r7, r4
	strh r3, [r2]
	ldr r6, _0811D19C  @ =0x00000E29
	add r0, r7, r6
	add r0, r5, r0
	ldrb r0, [r0]
	lsr r3, r0, #1
	cmp r3, #6
	bls _0811D058
	sub r0, r3, #7
	mov r3, r9
	strb r0, [r3]
	strb r0, [r2]
	mov r3, #6
_0811D058:
	strb r3, [r1]
	cmp r3, #0
	bne _0811D060
	b _0811D186
_0811D060:
	ldr r4, _0811D1A0  @ =0x00000E3D
	add r0, r7, r4
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0811D094
	mov r6, r9
	mov r0, #0
	ldrsb r0, [r6, r0]
	neg r0, r0
	strb r0, [r6]
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811D094
	ldr r0, _0811D1A4  @ =0x00000975
	add r1, r7, r0
	mov r0, #255
	strb r0, [r1]
	ldr r2, _0811D1A8  @ =0x00000979
	add r1, r7, r2
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
_0811D094:
	ldr r4, _0811D1AC  @ =gRam
	ldr r3, _0811D1A0  @ =0x00000E3D
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r2, r0, #25
	ldr r5, _0811D1B0  @ =gUnknown_0817F92C
	lsr r3, r2, #24
	add r0, r3, r5
	mov r6, #0
	ldrsh r0, [r0, r6]
	cmp r0, #0
	bne _0811D0B8
	ldr r0, _0811D1B4  @ =0x00000968
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #4
	strh r0, [r1]
_0811D0B8:
	ldr r0, _0811D1B8  @ =gUnknown_0817F934
	add r0, r3, r0
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	bne _0811D0CE
	ldr r3, _0811D1BC  @ =0x0000096C
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, #4
	strh r0, [r1]
_0811D0CE:
	lsr r2, r2, #25
	mov r9, r2
	mov r10, r5
	ldr r7, _0811D1C0  @ =gUnknown_03003E74
_0811D0D6:
	mov r4, r9
	lsl r3, r4, #1
	mov r5, r10
	add r0, r3, r5
	ldrh r2, [r0]
	cmp r2, #0
	beq _0811D0F2
	ldr r6, _0811D1AC  @ =gRam
	ldr r1, _0811D1C4  @ =0x00000974
	add r0, r6, r1
	ldrh r0, [r0]
	add r0, r2, r0
	lsl r0, r0, #16
	lsr r2, r0, #16
_0811D0F2:
	ldr r5, _0811D1AC  @ =gRam
	ldr r4, _0811D1B4  @ =0x00000968
	add r1, r5, r4
	ldrh r0, [r1]
	add r0, r2, r0
	mov r6, #0
	mov r8, r6
	strh r0, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r6, r5, r1
	strh r0, [r6]
	ldr r0, _0811D1B8  @ =gUnknown_0817F934
	add r0, r3, r0
	ldrh r2, [r0]
	cmp r2, #0
	beq _0811D120
	ldr r3, _0811D198  @ =0x00000978
	add r0, r5, r3
	ldrh r0, [r0]
	add r0, r2, r0
	lsl r0, r0, #16
	lsr r2, r0, #16
_0811D120:
	ldr r4, _0811D1BC  @ =0x0000096C
	add r1, r5, r4
	ldrh r0, [r1]
	add r0, r2, r0
	strh r0, [r1]
	ldr r1, _0811D1C8  @ =0x00000964
	add r4, r5, r1
	strh r0, [r4]
	bl sub_0811CAE8
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _0811D172
	ldrh r0, [r7]
	ldrh r1, [r4]
	ldrh r2, [r6]
	ldr r4, _0811D1CC  @ =0x00000996
	add r3, r5, r4
	ldrb r4, [r3]
	mov r3, #2
	and r3, r3, r4
	lsl r3, r3, #24
	lsr r3, r3, #24
	lsl r3, r3, #6
	ldr r6, _0811D1D0  @ =0x00001724
	add r4, r5, r6
	ldrb r4, [r4]
	mov r5, #2
	orr r4, r4, r5
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #41
	orr r3, r3, r4
	mov r4, r8
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
_0811D172:
	ldr r5, _0811D1AC  @ =gRam
	mov r6, #151
	lsl r6, r6, #4
	add r1, r5, r6
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811D0D6
_0811D186:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811D198:
	.4byte 0x00000978
_0811D19C:
	.4byte 0x00000E29
_0811D1A0:
	.4byte 0x00000E3D
_0811D1A4:
	.4byte 0x00000975
_0811D1A8:
	.4byte 0x00000979
_0811D1AC:
	.4byte gRam
_0811D1B0:
	.4byte gUnknown_0817F92C
_0811D1B4:
	.4byte 0x00000968
_0811D1B8:
	.4byte gUnknown_0817F934
_0811D1BC:
	.4byte 0x0000096C
_0811D1C0:
	.4byte gUnknown_03003E74
_0811D1C4:
	.4byte 0x00000974
_0811D1C8:
	.4byte 0x00000964
_0811D1CC:
	.4byte 0x00000996
_0811D1D0:
	.4byte 0x00001724
	THUMB_FUNC_END sub_0811CB9C

