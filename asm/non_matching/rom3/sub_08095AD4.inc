	THUMB_FUNC_START sub_08095AD4
sub_08095AD4: @ 0x08095AD4
	push {r4-r6,lr}
	ldr r1, _08095B3C  @ =gRam
	ldr r2, _08095B40  @ =0x0000172A
	add r0, r1, r2
	ldrb r3, [r0]
	add r5, r1, #0
	cmp r3, #0
	bne _08095AF6
	ldr r4, _08095B44  @ =0x00001712
	add r0, r5, r4
	strb r3, [r0]
	ldr r0, _08095B48  @ =0x00001719
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #2
	bne _08095AF6
	strb r3, [r1]
_08095AF6:
	ldr r1, _08095B4C  @ =0x00001714
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _08095B64
	ldr r2, _08095B50  @ =0x0000097C
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _08095B64
	ldr r4, _08095B54  @ =0x00001718
	add r3, r5, r4
	ldrb r0, [r3]
	cmp r0, #5
	bne _08095B22
	b _08096146
_08095B22:
	ldr r0, _08095B58  @ =0x00001717
	add r1, r5, r0
	mov r0, #9
	strb r0, [r1]
	ldr r1, _08095B5C  @ =0x00001715
	add r0, r5, r1
	strb r2, [r0]
	ldr r2, _08095B60  @ =0x00001716
	add r1, r5, r2
	mov r0, #1
	strb r0, [r1]
	strb r0, [r3]
	b _08096146
_08095B3C:
	.4byte gRam
_08095B40:
	.4byte 0x0000172A
_08095B44:
	.4byte 0x00001712
_08095B48:
	.4byte 0x00001719
_08095B4C:
	.4byte 0x00001714
_08095B50:
	.4byte 0x0000097C
_08095B54:
	.4byte 0x00001718
_08095B58:
	.4byte 0x00001717
_08095B5C:
	.4byte 0x00001715
_08095B60:
	.4byte 0x00001716
_08095B64:
	ldr r3, _08095B88  @ =0x000017F8
	add r0, r5, r3
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08095B90
	ldr r4, _08095B8C  @ =0x000017FA
	add r2, r5, r4
	ldrb r1, [r2]
	add r3, r3, #4
	add r0, r5, r3
	ldrb r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #8
	add r1, r1, r0
	strh r1, [r2]
	b _08095B98
_08095B88:
	.4byte 0x000017F8
_08095B8C:
	.4byte 0x000017FA
_08095B90:
	ldr r4, _08095C3C  @ =0x000017FA
	add r1, r5, r4
	ldrb r0, [r1]
	strh r0, [r1]
_08095B98:
	ldr r1, _08095C40  @ =0x000017D0
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	bne _08095BA8
	b _08095CBE
_08095BA8:
	ldr r2, _08095C44  @ =0x000017D4
	add r6, r5, r2
	ldrb r0, [r6]
	cmp r0, #0
	beq _08095BB4
	b _08095CCC
_08095BB4:
	ldr r3, _08095C48  @ =0x00001702
	add r0, r5, r3
	ldrb r4, [r0]
	cmp r4, #0
	beq _08095BC0
	b _08095CBE
_08095BC0:
	bl sub_08093078
	bl sub_08092BF4
	mov r0, #1
	strb r0, [r6]
	ldr r1, _08095C4C  @ =0x000016CC
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _08095C50  @ =0x000017CE
	add r0, r5, r2
	strb r1, [r0]
	ldr r3, _08095C54  @ =0x00001750
	add r0, r5, r3
	strb r4, [r0]
	ldr r1, _08095C58  @ =0x000017DF
	add r0, r5, r1
	strb r4, [r0]
	sub r2, r2, #24
	add r0, r5, r2
	strb r4, [r0]
	bl sub_08092B0C
	ldr r3, _08095C5C  @ =0x00001808
	add r0, r5, r3
	strb r4, [r0]
	ldr r1, _08095C60  @ =0x00001719
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _08095C64  @ =0x000017E1
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #1
	bne _08095C78
	sub r3, r3, #154
	add r1, r5, r3
	mov r0, #32
	strb r0, [r1]
	ldr r1, _08095C68  @ =0x0000180D
	add r0, r5, r1
	strb r4, [r0]
	sub r2, r2, #209
	add r0, r5, r2
	strb r4, [r0]
	add r3, r3, #131
	add r0, r5, r3
	strb r4, [r0]
	ldr r0, _08095C6C  @ =gFlippers
	ldrb r0, [r0]
	cmp r0, #0
	beq _08095C78
	ldr r4, _08095C70  @ =0x0000176C
	add r0, r5, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _08095CBE
	ldr r0, _08095C74  @ =0x00001718
	add r1, r5, r0
	mov r0, #4
	strb r0, [r1]
	b _08095CBE
	.byte 0x00
	.byte 0x00
_08095C3C:
	.4byte 0x000017FA
_08095C40:
	.4byte 0x000017D0
_08095C44:
	.4byte 0x000017D4
_08095C48:
	.4byte 0x00001702
_08095C4C:
	.4byte 0x000016CC
_08095C50:
	.4byte 0x000017CE
_08095C54:
	.4byte 0x00001750
_08095C58:
	.4byte 0x000017DF
_08095C5C:
	.4byte 0x00001808
_08095C60:
	.4byte 0x00001719
_08095C64:
	.4byte 0x000017E1
_08095C68:
	.4byte 0x0000180D
_08095C6C:
	.4byte gFlippers
_08095C70:
	.4byte 0x0000176C
_08095C74:
	.4byte 0x00001718
_08095C78:
	ldr r1, _08095CE8  @ =gRam
	ldr r2, _08095CEC  @ =0x000016EC
	add r0, r1, r2
	ldrb r2, [r0]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _08095CF0  @ =0x000016ED
	add r0, r1, r4
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #3
	add r0, r1, r4
	ldrb r2, [r0]
	add r3, r3, #3
	add r0, r1, r3
	strb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	ldr r4, _08095CF4  @ =0x0000180D
	add r1, r1, r4
	mov r0, #1
	strb r0, [r1]
	bl sub_0809A670
	mov r0, #4
	bl sub_0809E43C
_08095CBE:
	ldr r0, _08095CE8  @ =gRam
	ldr r2, _08095CF8  @ =0x000017D4
	add r1, r0, r2
	ldrb r1, [r1]
	add r5, r0, #0
	cmp r1, #0
	beq _08095D00
_08095CCC:
	mov r3, #192
	lsl r3, r3, #5
	add r0, r5, r3
	ldrb r0, [r0]
	mov r3, #7
	and r3, r3, r0
	cmp r3, #7
	bne _08095D24
	ldr r4, _08095CFC  @ =0x0000097C
	add r0, r5, r4
	strb r3, [r0]
	bl sub_08096BA0
	b _08096146
_08095CE8:
	.4byte gRam
_08095CEC:
	.4byte 0x000016EC
_08095CF0:
	.4byte 0x000016ED
_08095CF4:
	.4byte 0x0000180D
_08095CF8:
	.4byte 0x000017D4
_08095CFC:
	.4byte 0x0000097C
_08095D00:
	ldr r1, _08095D1C  @ =0x000017FF
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #66
	and r0, r0, r1
	cmp r0, #0
	beq _08095D24
	ldr r2, _08095D20  @ =0x0000097C
	add r1, r5, r2
	mov r0, #7
	strb r0, [r1]
	bl sub_08096BA0
	b _08096146
_08095D1C:
	.4byte 0x000017FF
_08095D20:
	.4byte 0x0000097C
_08095D24:
	ldr r3, _08095D70  @ =0x000017D2
	add r0, r5, r3
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _08095D88
	ldr r0, _08095D74  @ =0x000017D4
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _08095D88
	bl sub_08093078
	ldr r1, _08095D78  @ =0x00001702
	add r0, r5, r1
	ldrb r2, [r0]
	cmp r2, #0
	bne _08095D88
	ldr r3, _08095D7C  @ =0x000017CE
	add r0, r5, r3
	ldrb r1, [r0]
	ldr r3, _08095D80  @ =0x000016CC
	add r0, r5, r3
	strb r1, [r0]
	strb r2, [r4]
	mov r0, #0
	mov r1, #21
	bl sub_080AD1EC
	ldr r4, _08095D84  @ =0x0000180D
	add r1, r5, r4
	mov r0, #1
	strb r0, [r1]
	bl sub_0809A670
	b _08096146
	.byte 0x00
	.byte 0x00
_08095D70:
	.4byte 0x000017D2
_08095D74:
	.4byte 0x000017D4
_08095D78:
	.4byte 0x00001702
_08095D7C:
	.4byte 0x000017CE
_08095D80:
	.4byte 0x000016CC
_08095D84:
	.4byte 0x0000180D
_08095D88:
	ldr r4, _08095E44  @ =gRam
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08095E84
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08095E84
	mov r0, #4
	bl sub_0809E43C
	mov r2, #16
	ldr r3, _08095E48  @ =0x00001726
	add r6, r4, r3
	ldrb r1, [r6]
	mov r5, #1
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08095DBE
	mov r2, #240
_08095DBE:
	ldr r1, _08095E4C  @ =0x000016CE
	add r0, r4, r1
	strb r2, [r0]
	bl sub_08093078
	ldr r2, _08095E50  @ =0x00001702
	add r0, r4, r2
	mov r3, #2
	strb r3, [r0]
	ldr r1, _08095E54  @ =0x000017F3
	add r0, r4, r1
	mov r1, #20
	strb r1, [r0]
	add r2, r2, #242
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _08095E58  @ =0x000017F6
	add r1, r4, r0
	mov r2, #0
	mov r0, #255
	strh r0, [r1]
	ldr r0, _08095E5C  @ =0x00001718
	add r1, r4, r0
	mov r0, #12
	strb r0, [r1]
	ldr r1, _08095E60  @ =0x0000180D
	add r0, r4, r1
	strb r5, [r0]
	sub r1, r1, #213
	add r0, r4, r1
	strb r5, [r0]
	sub r1, r1, #62
	add r0, r4, r1
	strb r2, [r0]
	add r1, r1, #31
	add r0, r4, r1
	strb r2, [r0]
	ldr r2, _08095E64  @ =0x000009B2
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08095E1E
	mov r1, #161
	lsl r1, r1, #4
	add r0, r4, r1
	strb r3, [r0]
_08095E1E:
	ldrb r1, [r6]
	mov r0, #253
	and r0, r0, r1
	lsl r0, r0, #25
	lsr r2, r0, #24
	ldr r3, _08095E68  @ =0x000016C4
	add r0, r4, r3
	ldrh r4, [r0]
	add r0, r2, #0
	bl sub_08093128
	lsl r0, r0, #24
	lsr r2, r0, #24
	strb r5, [r6]
	cmp r2, #255
	bne _08095E6C
	bl sub_080932C8
	b _08095E70
_08095E44:
	.4byte gRam
_08095E48:
	.4byte 0x00001726
_08095E4C:
	.4byte 0x000016CE
_08095E50:
	.4byte 0x00001702
_08095E54:
	.4byte 0x000017F3
_08095E58:
	.4byte 0x000017F6
_08095E5C:
	.4byte 0x00001718
_08095E60:
	.4byte 0x0000180D
_08095E64:
	.4byte 0x000009B2
_08095E68:
	.4byte 0x000016C4
_08095E6C:
	bl sub_08093604
_08095E70:
	ldr r0, _08095E7C  @ =gRam
	ldr r1, _08095E80  @ =0x000016C4
	add r0, r0, r1
	strh r4, [r0]
	b _08096146
	.byte 0x00
	.byte 0x00
_08095E7C:
	.4byte gRam
_08095E80:
	.4byte 0x000016C4
_08095E84:
	ldr r4, _08095F5C  @ =gRam
	ldr r2, _08095F60  @ =0x00001802
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #119
	and r0, r0, r1
	cmp r0, #0
	beq _08095F08
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08095F08
	mov r0, #4
	bl sub_0809E43C
	mov r2, #15
	ldr r3, _08095F64  @ =0x00001718
	add r0, r4, r3
	strb r2, [r0]
	mov r2, #16
	ldr r1, _08095F68  @ =0x00001726
	add r0, r4, r1
	ldrb r1, [r0]
	mov r5, #1
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08095EC0
	mov r2, #240
_08095EC0:
	ldr r3, _08095F6C  @ =0x000016CE
	add r0, r4, r3
	strb r2, [r0]
	bl sub_08093078
	ldr r0, _08095F70  @ =0x00001702
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	ldr r1, _08095F74  @ =0x000017F3
	add r0, r4, r1
	mov r1, #20
	strb r1, [r0]
	ldr r2, _08095F78  @ =0x000017F4
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08095F7C  @ =0x000017F6
	add r1, r4, r3
	mov r2, #0
	mov r0, #255
	strh r0, [r1]
	ldr r1, _08095F80  @ =0x000016F8
	add r0, r4, r1
	strb r2, [r0]
	add r3, r3, #23
	add r0, r4, r3
	strb r5, [r0]
	add r1, r1, #64
	add r0, r4, r1
	strb r5, [r0]
	ldr r3, _08095F84  @ =0x000016FA
	add r0, r4, r3
	strb r2, [r0]
	sub r1, r1, #31
	add r0, r4, r1
	strb r2, [r0]
_08095F08:
	ldr r5, _08095F5C  @ =gRam
	mov r3, #192
	lsl r3, r3, #5
	add r2, r5, r3
	ldrb r1, [r2]
	mov r0, #112
	and r0, r0, r1
	cmp r0, #0
	beq _08095F94
	ldr r4, [r2]
	ldr r0, _08095F88  @ =0x00770007
	and r4, r4, r0
	cmp r4, #0
	bne _08095F94
	ldr r1, _08095F64  @ =0x00001718
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #13
	beq _08095F94
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08095F94
	mov r0, #4
	bl sub_0809E43C
	bl sub_08093078
	ldr r2, _08095F8C  @ =0x0000180D
	add r1, r5, r2
	mov r0, #1
	strb r0, [r1]
	ldr r3, _08095F84  @ =0x000016FA
	add r0, r5, r3
	strb r4, [r0]
	ldr r1, _08095F90  @ =0x00001719
	add r0, r5, r1
	strb r4, [r0]
	bl sub_0809A4A8
	b _08096146
_08095F5C:
	.4byte gRam
_08095F60:
	.4byte 0x00001802
_08095F64:
	.4byte 0x00001718
_08095F68:
	.4byte 0x00001726
_08095F6C:
	.4byte 0x000016CE
_08095F70:
	.4byte 0x00001702
_08095F74:
	.4byte 0x000017F3
_08095F78:
	.4byte 0x000017F4
_08095F7C:
	.4byte 0x000017F6
_08095F80:
	.4byte 0x000016F8
_08095F84:
	.4byte 0x000016FA
_08095F88:
	.4byte 0x00770007
_08095F8C:
	.4byte 0x0000180D
_08095F90:
	.4byte 0x00001719
_08095F94:
	ldr r4, _08096024  @ =gRam
	ldr r2, _08096028  @ =0x00001801
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08096054
	mov r3, #192
	lsl r3, r3, #5
	add r0, r4, r3
	ldr r0, [r0]
	ldr r1, _0809602C  @ =0x00770007
	and r0, r0, r1
	cmp r0, #0
	bne _08096054
	bl sub_0809A5BC
	lsl r0, r0, #24
	cmp r0, #0
	beq _08096054
	mov r2, #16
	ldr r1, _08096030  @ =0x00001726
	add r0, r4, r1
	ldrb r1, [r0]
	mov r5, #1
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08095FD2
	mov r2, #240
_08095FD2:
	ldr r3, _08096034  @ =0x000016CE
	add r0, r4, r3
	strb r2, [r0]
	bl sub_08093078
	ldr r0, _08096038  @ =0x00001702
	add r1, r4, r0
	mov r0, #2
	strb r0, [r1]
	ldr r1, _0809603C  @ =0x000017F3
	add r0, r4, r1
	mov r1, #20
	strb r1, [r0]
	ldr r2, _08096040  @ =0x000017F4
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _08096044  @ =0x000017F6
	add r1, r4, r3
	mov r2, #0
	mov r0, #255
	strh r0, [r1]
	ldr r0, _08096048  @ =0x00001718
	add r1, r4, r0
	mov r0, #14
	strb r0, [r1]
	ldr r1, _0809604C  @ =0x000016F8
	add r0, r4, r1
	strb r2, [r0]
	add r3, r3, #23
	add r0, r4, r3
	strb r5, [r0]
	add r1, r1, #64
	add r0, r4, r1
	strb r5, [r0]
	ldr r3, _08096050  @ =0x000016FA
	add r0, r4, r3
	strb r2, [r0]
	sub r1, r1, #31
	add r0, r4, r1
	strb r2, [r0]
	b _08096146
_08096024:
	.4byte gRam
_08096028:
	.4byte 0x00001801
_0809602C:
	.4byte 0x00770007
_08096030:
	.4byte 0x00001726
_08096034:
	.4byte 0x000016CE
_08096038:
	.4byte 0x00001702
_0809603C:
	.4byte 0x000017F3
_08096040:
	.4byte 0x000017F4
_08096044:
	.4byte 0x000017F6
_08096048:
	.4byte 0x00001718
_0809604C:
	.4byte 0x000016F8
_08096050:
	.4byte 0x000016FA
_08096054:
	ldr r4, _080960EC  @ =gRam
	ldr r2, _080960F0  @ =0x0000097C
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _0809609C
	ldr r3, _080960F4  @ =0x00000978
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _0809609C
	ldr r1, _080960F8  @ =0x00001804
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809608A
	ldr r2, _080960FC  @ =0x000016D5
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0809609C
_0809608A:
	bl sub_08093CF8
	ldr r3, _08096100  @ =0x0000172B
	add r0, r4, r3
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08096146
_0809609C:
	ldr r3, _080960EC  @ =gRam
	ldr r4, _08096100  @ =0x0000172B
	add r1, r3, r4
	mov r0, #0
	strb r0, [r1]
	ldr r1, _08096104  @ =0x00001774
	add r0, r3, r1
	ldrh r0, [r0]
	lsr r2, r0, #8
	mov r0, #7
	and r2, r2, r0
	add r5, r3, #0
	cmp r2, #0
	beq _08096142
	sub r4, r4, #51
	add r0, r3, r4
	add r4, r4, #178
	add r1, r3, r4
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r4, r4, #154
	add r1, r3, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _0809613C
	ldr r1, _08096108  @ =0x000016C4
	add r0, r3, r1
	ldrb r2, [r0]
	add r4, r4, #22
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #2
	bne _0809610C
	mov r0, #4
	and r2, r2, r0
	cmp r2, #0
	beq _08096114
	b _08096142
_080960EC:
	.4byte gRam
_080960F0:
	.4byte 0x0000097C
_080960F4:
	.4byte 0x00000978
_080960F8:
	.4byte 0x00001804
_080960FC:
	.4byte 0x000016D5
_08096100:
	.4byte 0x0000172B
_08096104:
	.4byte 0x00001774
_08096108:
	.4byte 0x000016C4
_0809610C:
	mov r0, #4
	and r2, r2, r0
	cmp r2, #0
	beq _08096142
_08096114:
	ldr r0, _08096130  @ =gArmor
	ldrb r2, [r0]
	ldr r0, _08096134  @ =gUnknown_08167D62
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _08096138  @ =0x00001805
	add r0, r5, r2
	strb r1, [r0]
	bl sub_08093078
	bl sub_08099324
	b _08096146
	.byte 0x00
	.byte 0x00
_08096130:
	.4byte gArmor
_08096134:
	.4byte gUnknown_08167D62
_08096138:
	.4byte 0x00001805
_0809613C:
	ldr r4, _0809614C  @ =0x0000097C
	add r0, r3, r4
	strb r2, [r0]
_08096142:
	bl sub_08096BA0
_08096146:
	pop {r4-r6}
	pop {r0}
	bx r0
_0809614C:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_08095AD4

