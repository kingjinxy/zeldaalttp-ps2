	THUMB_FUNC_START sub_08082ADC
sub_08082ADC: @ 0x08082ADC
	push {r4-r7,lr}
	add r6, r0, #0
	ldr r3, _08082BF8  @ =gRam
	ldr r1, _08082BFC  @ =0x00000964
	add r0, r3, r1
	ldrh r2, [r0]
	add r0, r2, #0
	sub r0, r0, #32
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r7, r3, #0
	cmp r0, #7
	bhi _08082AF8
	b _08082E7A
_08082AF8:
	ldr r1, _08082C00  @ =gUnknown_0816784C
	lsl r5, r2, #16
	asr r0, r5, #17
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r4, r3, r2
	mov r1, #0
	mov r12, r1
	strh r0, [r4]
	lsl r2, r6, #1
	ldr r1, _08082C04  @ =0x000018F0
	add r0, r3, r1
	add r0, r2, r0
	ldrh r0, [r0]
	mov r1, #3
	and r1, r1, r0
	add r6, r2, #0
	cmp r1, #0
	beq _08082B26
	b _08082C5C
_08082B26:
	ldr r1, _08082C08  @ =0x000018D0
	add r0, r3, r1
	add r0, r2, r0
	ldr r2, _08082C0C  @ =0x00001934
	add r1, r3, r2
	ldrh r2, [r0]
	ldrh r1, [r1]
	cmp r2, r1
	beq _08082B56
	ldr r1, _08082C10  @ =0x00001936
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r2, r0
	beq _08082B56
	add r1, r1, #2
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r2, r0
	beq _08082B56
	add r1, r1, #2
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r2, r0
	bne _08082B60
_08082B56:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r7, r2
	ldr r0, _08082C14  @ =0x00008E8E
	strh r0, [r1]
_08082B60:
	ldr r1, _08082C08  @ =0x000018D0
	add r0, r7, r1
	add r0, r6, r0
	ldrh r0, [r0]
	lsr r3, r0, #1
	ldr r2, _08082C18  @ =0x0000783F
	add r0, r2, #0
	and r3, r3, r0
	ldr r0, _08082C1C  @ =gUnknown_0200CBA1
	add r2, r3, r0
	mov r0, #150
	lsl r0, r0, #4
	add r1, r7, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C20  @ =gUnknown_0200CBA2
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C24  @ =gUnknown_0200CBE1
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C28  @ =gUnknown_0200CBE2
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C2C  @ =gUnknown_0200CC21
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C30  @ =gUnknown_0200CC22
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C34  @ =gUnknown_0200CC61
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C38  @ =gUnknown_0200CC62
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C3C  @ =gUnknown_0200CCA1
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C40  @ =gUnknown_0200CCA2
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C44  @ =gUnknown_0200CCE1
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C48  @ =gUnknown_0200CCE2
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C4C  @ =gUnknown_0200CD21
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082C50  @ =gUnknown_0200CD22
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r1, _08082C54  @ =gUnknown_0200CD61
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _08082C58  @ =gUnknown_0200CD62
	add r0, r3, r2
	strb r1, [r0]
	b _08082E7A
	.byte 0x00
	.byte 0x00
_08082BF8:
	.4byte gRam
_08082BFC:
	.4byte 0x00000964
_08082C00:
	.4byte gUnknown_0816784C
_08082C04:
	.4byte 0x000018F0
_08082C08:
	.4byte 0x000018D0
_08082C0C:
	.4byte 0x00001934
_08082C10:
	.4byte 0x00001936
_08082C14:
	.4byte 0x00008E8E
_08082C18:
	.4byte 0x0000783F
_08082C1C:
	.4byte gUnknown_0200CBA1
_08082C20:
	.4byte gUnknown_0200CBA2
_08082C24:
	.4byte gUnknown_0200CBE1
_08082C28:
	.4byte gUnknown_0200CBE2
_08082C2C:
	.4byte gUnknown_0200CC21
_08082C30:
	.4byte gUnknown_0200CC22
_08082C34:
	.4byte gUnknown_0200CC61
_08082C38:
	.4byte gUnknown_0200CC62
_08082C3C:
	.4byte gUnknown_0200CCA1
_08082C40:
	.4byte gUnknown_0200CCA2
_08082C44:
	.4byte gUnknown_0200CCE1
_08082C48:
	.4byte gUnknown_0200CCE2
_08082C4C:
	.4byte gUnknown_0200CD21
_08082C50:
	.4byte gUnknown_0200CD22
_08082C54:
	.4byte gUnknown_0200CD61
_08082C58:
	.4byte gUnknown_0200CD62
_08082C5C:
	cmp r1, #1
	bne _08082D40
	asr r0, r5, #16
	cmp r0, #10
	beq _08082C9A
	cmp r0, #14
	beq _08082C9A
	ldr r1, _08082D08  @ =0x000018D0
	add r0, r3, r1
	add r0, r2, r0
	ldr r2, _08082D0C  @ =0x00001934
	add r1, r3, r2
	ldrh r2, [r0]
	ldrh r1, [r1]
	cmp r2, r1
	beq _08082C9A
	ldr r1, _08082D10  @ =0x00001936
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r2, r0
	beq _08082C9A
	add r1, r1, #2
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r2, r0
	beq _08082C9A
	add r1, r1, #2
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r2, r0
	bne _08082CA4
_08082C9A:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r7, r2
	ldr r0, _08082D14  @ =0x00008E8E
	strh r0, [r1]
_08082CA4:
	ldr r1, _08082D08  @ =0x000018D0
	add r0, r7, r1
	add r0, r6, r0
	ldrh r0, [r0]
	lsr r3, r0, #1
	ldr r0, _08082D18  @ =gUnknown_0200CBE1
	add r2, r3, r0
	mov r0, #150
	lsl r0, r0, #4
	add r1, r7, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D1C  @ =gUnknown_0200CBE2
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D20  @ =gUnknown_0200CC21
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D24  @ =gUnknown_0200CC22
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D28  @ =gUnknown_0200CC61
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D2C  @ =gUnknown_0200CC62
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D30  @ =gUnknown_0200CCA1
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D34  @ =gUnknown_0200CCA2
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D38  @ =gUnknown_0200CCE1
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r0, _08082D3C  @ =gUnknown_0200CCE2
	add r2, r3, r0
	ldrb r0, [r1]
	strb r0, [r2]
	b _08082E7A
	.byte 0x00
	.byte 0x00
_08082D08:
	.4byte 0x000018D0
_08082D0C:
	.4byte 0x00001934
_08082D10:
	.4byte 0x00001936
_08082D14:
	.4byte 0x00008E8E
_08082D18:
	.4byte gUnknown_0200CBE1
_08082D1C:
	.4byte gUnknown_0200CBE2
_08082D20:
	.4byte gUnknown_0200CC21
_08082D24:
	.4byte gUnknown_0200CC22
_08082D28:
	.4byte gUnknown_0200CC61
_08082D2C:
	.4byte gUnknown_0200CC62
_08082D30:
	.4byte gUnknown_0200CCA1
_08082D34:
	.4byte gUnknown_0200CCA2
_08082D38:
	.4byte gUnknown_0200CCE1
_08082D3C:
	.4byte gUnknown_0200CCE2
_08082D40:
	cmp r1, #2
	bne _08082DFC
	ldr r1, _08082DCC  @ =0x000018D0
	add r0, r3, r1
	add r0, r2, r0
	ldrh r0, [r0]
	lsr r3, r0, #1
	ldr r2, _08082DD0  @ =0x0000FFE0
	add r0, r2, #0
	and r3, r3, r0
	ldr r0, _08082DD4  @ =gUnknown_0200CBE0
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _08082DD8  @ =gUnknown_0200CBE1
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08082DDC  @ =gUnknown_0200CBE2
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	add r2, r2, #2
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08082DE0  @ =gUnknown_0200CBE4
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08082DE4  @ =gUnknown_0200CBE5
	add r0, r3, r1
	mov r2, r12
	strb r2, [r0]
	ldr r0, _08082DE8  @ =gUnknown_0200CC20
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _08082DEC  @ =gUnknown_0200CC21
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08082DF0  @ =gUnknown_0200CC22
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	add r2, r2, #2
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08082DF4  @ =gUnknown_0200CC24
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08082DF8  @ =gUnknown_0200CC25
	add r0, r3, r1
	mov r2, r12
	strb r2, [r0]
	b _08082E7A
	.byte 0x00
	.byte 0x00
_08082DCC:
	.4byte 0x000018D0
_08082DD0:
	.4byte 0x0000FFE0
_08082DD4:
	.4byte gUnknown_0200CBE0
_08082DD8:
	.4byte gUnknown_0200CBE1
_08082DDC:
	.4byte gUnknown_0200CBE2
_08082DE0:
	.4byte gUnknown_0200CBE4
_08082DE4:
	.4byte gUnknown_0200CBE5
_08082DE8:
	.4byte gUnknown_0200CC20
_08082DEC:
	.4byte gUnknown_0200CC21
_08082DF0:
	.4byte gUnknown_0200CC22
_08082DF4:
	.4byte gUnknown_0200CC24
_08082DF8:
	.4byte gUnknown_0200CC25
_08082DFC:
	ldr r1, _08082E80  @ =0x000018D0
	add r0, r3, r1
	add r0, r2, r0
	ldrh r0, [r0]
	lsr r3, r0, #1
	ldr r2, _08082E84  @ =gUnknown_0200CBE0
	add r0, r3, r2
	mov r1, r12
	strb r1, [r0]
	add r2, r2, #1
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08082E88  @ =gUnknown_0200CBE2
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	add r2, r2, #2
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08082E8C  @ =gUnknown_0200CBE4
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	add r2, r2, #2
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08082E90  @ =gUnknown_0200CC20
	add r0, r3, r1
	mov r2, r12
	strb r2, [r0]
	ldr r0, _08082E94  @ =gUnknown_0200CC21
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _08082E98  @ =gUnknown_0200CC22
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08082E9C  @ =gUnknown_0200CC23
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	add r2, r2, #2
	add r1, r3, r2
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08082EA0  @ =gUnknown_0200CC25
	add r1, r3, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r1]
_08082E7A:
	pop {r4-r7}
	pop {r0}
	bx r0
_08082E80:
	.4byte 0x000018D0
_08082E84:
	.4byte gUnknown_0200CBE0
_08082E88:
	.4byte gUnknown_0200CBE2
_08082E8C:
	.4byte gUnknown_0200CBE4
_08082E90:
	.4byte gUnknown_0200CC20
_08082E94:
	.4byte gUnknown_0200CC21
_08082E98:
	.4byte gUnknown_0200CC22
_08082E9C:
	.4byte gUnknown_0200CC23
_08082EA0:
	.4byte gUnknown_0200CC25
	THUMB_FUNC_END sub_08082ADC

